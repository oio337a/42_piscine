/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_puzzle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 14:32:55 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/23 16:46:49 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_puzzle(int board[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			ft_putchar(board[i][j] + '0');
			if (j != 3)
			{
				write(1, " ", 1);
			}
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
