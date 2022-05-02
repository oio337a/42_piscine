/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 12:30:03 by yongmipa          #+#    #+#             */
/*   Updated: 2022/05/02 13:46:18 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	atoi(char *str)
{
	int	num;
	int	i;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num * sign);
}
