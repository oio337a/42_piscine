/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 12:21:43 by yongmipa          #+#    #+#             */
/*   Updated: 2022/05/02 13:47:42 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "doop.h"

int	main(int ac, char **av)
{
	int		a;
	int		b;
	char	op;

	if (ac == 4)
	{
		if (!ft_is_valid(av[2]))
		{
			write(1, "0\n", 2);
			return (0);
		}
		op = av[2][0];
		a = atoi(av[1]);
		b = atoi(av[3]);
		if (op == '/' && b == 0)
			write(1, "Stop : division by zero\n", 25);
		else if (op == '%' && b == 0)
			write(1, "Stop : modulo by zero\n", 23);
		else
		{
			ft_putnbr(do_op(a, op, b));
			write(1, "\n", 1);
		}
	}
	return (0);
}
