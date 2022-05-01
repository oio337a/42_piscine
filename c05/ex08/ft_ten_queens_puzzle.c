/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 15:31:55 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/25 11:51:17 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	my_abs(int num)
{
	if (num > 0)
		return (num);
	else
		return (-num);
}

int	queen_is_ok(char *answer, int depth)
{
	int	col_cmp;
	int	row_cmp;
	int	row;

	col_cmp = 0;
	while (col_cmp < depth)
	{
		row_cmp = answer[col_cmp] - '0';
		row = answer[depth] - '0';
		if (row == row_cmp)
			return (0);
		if (my_abs(col_cmp - depth) == my_abs(row - row_cmp))
			return (0);
		col_cmp++;
	}
	return (1);
}

int	show_me_the_queen(char *answer, int depth)
{
	int	cnt;
	int	cur;

	cnt = 0;
	cur = 0;
	if (depth == 10)
	{
		write(1, answer, 10);
		write(1, "\n", 1);
		return (1);
	}
	while (cur < 10)
	{
		answer[depth] = cur + '0';
		if (queen_is_ok(answer, depth))
			cnt += show_me_the_queen(answer, depth + 1);
		cur++;
	}
	return (cnt);
}

int	ft_ten_queens_puzzle(void)
{
	char	answer[11];

	return (show_me_the_queen(answer, 0));
}
