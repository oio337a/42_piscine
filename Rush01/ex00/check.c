/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 12:46:28 by dajeong           #+#    #+#             */
/*   Updated: 2022/04/23 18:21:12 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	colup_check(int board[4][4], int col, int num)
{
	int	row;
	int	max;
	int	count;

	row = 0;
	count = 1;
	max = board[row][col];
	while (row < 4)
	{
		if (board[row][col] > max)
		{
			max = board[row][col];
			count++;
		}
		row++;
	}
	if (count == num)
		return (1);
	return (0);
}

int	coldown_check(int board[4][4], int col, int num)
{
	int	row;
	int	max;
	int	count;

	row = 3;
	count = 1;
	max = board[row][col];
	while (row >= 0)
	{
		if (board[row][col] > max)
		{
			max = board[row][col];
			count++;
		}
		row--;
	}
	if (count == num)
		return (1);
	return (0);
}

int	rowleft_check(int board[4][4], int row, int num)
{
	int	col;
	int	max;
	int	count;

	col = 0;
	count = 1;
	max = board[row][col];
	while (col < 4)
	{
		if (board[row][col] > max)
		{
			max = board[row][col];
			count++;
		}
		col++;
	}
	if (count == num)
		return (1);
	return (0);
}

int	rowright_check(int board[4][4], int row, int num)
{
	int	col;
	int	max;
	int	count;

	col = 3;
	count = 1;
	max = board[row][col];
	while (col >= 0)
	{
		if (board[row][col] > max)
		{
			max = board[row][col];
			count++;
		}
		col--;
	}
	if (count == num)
		return (1);
	return (0);
}

int	check_sky(int board[4][4], int *in_num)
{
	int	index;

	index = 0;
	while (in_num[index])
	{
		if (index >= 0 && index <= 3)
			if (!colup_check(board, index, in_num[index]))
				return (0);
		if (index >= 4 && index <= 7)
			if (!coldown_check(board, index - 4, in_num[index]))
				return (0);
		if (index >= 8 && index <= 11)
			if (!rowleft_check(board, index - 8, in_num[index]))
				return (0);
		if (index >= 12 && index <= 15)
			if (!rowright_check(board, index - 12, in_num[index]))
				return (0);
		index++;
	}
	return (1);
}
