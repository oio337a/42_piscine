/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_1_4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:52:15 by seokang           #+#    #+#             */
/*   Updated: 2022/04/23 18:22:01 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_push(int board[4][4], int *input);
void	print_puzzle(int board[4][4]);

void	add_41push(int board[4][4], int *input, int loca)
{
	int	build;

	build = 0;
	while ((input[loca]) && loca <= 15)
	{
		if ((input[loca] == 4) && (loca >= 8 && loca <= 11))
		{
			while (build < 4)
			{
				board[loca % 4][build] = build + 1;
				build++;
			}
		}
		build = 4;
		if ((input[loca] == 4) && (loca >= 12 && loca <= 15))
		{
			while (build > 0)
			{
				board[loca % 4][4 - build] = build;
				build--;
			}
		}
		loca++;
	}
}

void	add_40push(int board[4][4], int *input)
{
	int	loca;
	int	build;

	loca = 0;
	build = -1;
	while ((input[loca]) && loca < 8)
	{
		if ((input[loca] == 4) && (loca >= 0 && loca <= 3))
		{
			while (++build < 4)
				board[build][loca] = build + 1;
		}
		build = 4;
		if ((input[loca] == 4) && (loca >= 4 && loca <= 7))
		{
			while (build > 0)
			{
			board[4 - build][loca % 4] = build;
			build--;
			}
		}
		loca++;
	}
	add_41push(board, input, loca);
}

void	add_1push(int board[4][4], int *input)
{
	int	loca;

	loca = 0;
	while (input[loca])
	{
		if ((input[loca] == 1) && ((loca >= 0) && (loca <= 3)))
			board[0][loca] = 4;
		if ((input[loca] == 1) && ((loca >= 4) && (loca <= 7)))
			board[3][loca - 4] = 4;
		if ((input[loca] == 1) && ((loca >= 8) && (loca <= 11)))
			board[loca - 8][0] = 4;
		if ((input[loca] == 1) && ((loca >= 12) && (loca <= 15)))
			board[loca - 12][3] = 4;
		loca++;
	}
	add_40push(board, input);
}

int	lets_play_puzzle(int *input)
{
	int	row;
	int	col;
	int	board[4][4];

	row = 0;
	col = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}
	add_1push(board, input);
	if ((check_push(board, input)) == 1)
		print_puzzle(board);
	else
		write(1, "ERROR\n", 6);
	return (0);
}
