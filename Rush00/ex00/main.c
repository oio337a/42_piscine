/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 11:33:47 by wonlim            #+#    #+#             */
/*   Updated: 2022/04/16 19:17:47 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);

int	ft_atoi(char *str)
{
	int		i;
	double	num;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || '9' < str[i])
			return (0);
		i++;
	}
	num = 0;
	i = 0;
	while (str[i])
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	if (2147483647 < num || num == 0)
		return (0);
	return ((int)num);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc != 3)
		write(1, "error : 2개의 정수를 입력해주세요.\n", 46);
	else
	{
		x = ft_atoi(argv[1]);
		if (x == 0)
		{
			write(1, "error : 올바른 값을 입력하세요.\n", 42);
			return (0);
		}
		y = ft_atoi(argv[2]);
		if (y == 0)
		{
			write(1, "error : 올바른 값을 입력하세요.\n", 42);
			return (0);
		}
		rush(x, y);
	}
	return (0);
}
