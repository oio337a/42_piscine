/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:48:02 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/23 22:10:48 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb, int base_len, char *base)
{
	long long	l_nb;

	l_nb = nb;
	if (l_nb < 0)
	{
		write(1, "-", 1);
		l_nb *= -1;
	}
	if (l_nb >= base_len)
	{
		ft_putnbr(l_nb / base_len, base_len, base);
		ft_putnbr(l_nb % base_len, base_len, base);
	}
	else
		ft_putchar(base[l_nb % base_len]);
}

int	base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
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

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = base_check(base);
	if (!base_len)
		return ;
	ft_putnbr(nbr, base_len, base);
}
