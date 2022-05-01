/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 20:42:50 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/17 17:48:32 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_itoa(int val)
{
	int	sib;
	int	il;

	sib = val / 10;
	il = val % 10;
	ft_putchar(sib + '0');
	ft_putchar(il + '0');
}

void	solution(int x, int y)
{
	ft_itoa(x);
	write(1, " ", 1);
	ft_itoa(y);
	if (x < 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x < 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			solution(x, y);
			y++;
		}
		x++;
	}
}
/*
int		main()
{
    ft_print_comb2();
    return 0;
}*/