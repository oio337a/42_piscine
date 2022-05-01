/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 14:58:56 by dajeong           #+#    #+#             */
/*   Updated: 2022/04/23 18:08:47 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	check_sky(int board[4][4], int *in_num);

int	add_push(int board[4][4], int *row, int *col)
{
	*row = 0;
	while (*row < 4)
	{
		*col = 0;
		while (*col < 4)
		{
			if (board[*row][*col] == 0)
				return (1);
			*col += 1;
		}
		*row += 1;
	}
	return (0);
}

int	build_col(int board[4][4], int col, int num)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (board[row][col] == num)
			return (0);
		row++;
	}
	return (1);
}

int	build_row(int board[4][4], int row, int num)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (board[row][col] == num)
			return (0);
		col++;
	}
	return (1);
}

int	build_check(int board[4][4], int row, int col, int num)
{
	if ((build_row(board, row, num)
			&& (build_col(board, col, num))) && (board[row][col] == 0))
		return (1);
	return (0);
}

int	check_push(int board[4][4], int *input)
{
	int	row;
	int	col;
	int	n;

	n = 1;
	if ((add_push(board, &row, &col) == 0) && (check_sky(board, input) == 1))
		return (1);
	while (n <= 4)
	{
		if (build_check(board, row, col, n))
		{
			board[row][col] = n;
			if (check_push(board, input) == 1)
				return (1);
			board[row][col] = 0;
		}
		n++;
	}
	return (0);
}
