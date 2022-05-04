/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 12:21:43 by yongmipa          #+#    #+#             */
/*   Updated: 2022/05/04 20:45:27 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "doop.h"

int	baejung(int a, char op, int b)
{
	int	(*yeonsan[5])(int, int);

	yeonsan[0] = &add;
	yeonsan[1] = &miner;
	yeonsan[2] = &mul;
	yeonsan[3] = &div;
	yeonsan[4] = &modul;
	if (op == '+')
		return (yeonsan[0](a, b));
	if (op == '-')
		return (yeonsan[1](a, b));
	if (op == '*')
		return (yeonsan[2](a, b));
	if (op == '/')
		return (yeonsan[3](a, b));
	if (op == '%')
		return (yeonsan[4](a, b));
	return (0);
}

int	main(int ac, char **av)
{
	int		a;
	int		b;
	char	op;

	if (ac == 4)
	{
		if (!ft_is_valid(av[2]))
			write(1, "0\n", 2);
		else
		{
			op = av[2][0];
			a = atoi(av[1]);
			b = atoi(av[3]);
			if (op == '/' && b == 0)
				write(1, "Stop : division by zero\n", 24);
			else if (op == '%' && b == 0)
				write(1, "Stop : modulo by zero\n", 22);
			else
			{
				ft_putnbr(baejung(a, op, b));
				write(1, "\n", 1);
			}
		}
	}
	return (0);
}
