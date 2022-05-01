/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 20:31:41 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/24 20:40:11 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac > 1)
	{
		while (ac - 1 >= 1)
		{
			i = 0;
			while (av[ac - 1][i])
			{
				write(1, &av[ac - 1][i], 1);
				i++;
			}
			write(1, "\n", 1);
			ac--;
		}
	}
	return (0);
}
