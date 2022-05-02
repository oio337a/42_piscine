/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 12:30:12 by yongmipa          #+#    #+#             */
/*   Updated: 2022/05/02 13:46:12 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_cal(int nb)
{
	if (nb > 9)
	{
		ft_cal(nb / 10);
		ft_cal(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		write(1, "-", 1);
		nb *= -1;
	}
	ft_cal(nb);
}

int	do_op(int a, char op, int b)
{
	if (op == '+')
		return (a + b);
	else if (op == '-')
		return (a - b);
	else if (op == '/')
		return (a / b);
	else if (op == '%')
		return (a % b);
	else if (op == '*')
		return (a * b);
	return (0);
}
