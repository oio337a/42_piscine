/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:28:43 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/24 11:47:26 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	atoi_is_ok(char c, char *base)
{
	int	j;

	j = 0;
	while (c != base[j] && base[j])
		j++;
	if (base[j] == '\0')
		return (-1);
	return (j);
}

int	ft_atoi(char *str, char *base, int base_len)
{
	int	i;
	int	sign;
	int	num;
	int	j;

	i = 0;
	sign = 1;
	num = 0;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i])
	{
		j = atoi_is_ok(str[i], base);
		if (j == -1)
			break ;
		num = num * base_len + j;
		i++;
	}
	return (num * sign);
}

int	base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+'
			|| (9 <= base[i] && base[i] <= 13) || base[i] == 32)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	atoi;

	base_len = base_check(base);
	if (!base_len)
		return (0);
	atoi = ft_atoi(str, base, base_len);
	return (atoi);
}
