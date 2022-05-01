/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 12:34:56 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/23 18:21:11 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	lets_play_puzzle(int *input);

int	check_input(char *av, int *input)
{
	int	i;
	int	j;
	int	one;
	int	four;

	i = 0;
	one = 0;
	four = 0;
	j = 0;
	while (av[i])
	{
		if (av[i] >= '1' && av[i] <= '4')
		{
			if (av[i] == '1')
				one++;
			else if (av[i] == '4')
				four++;
			input[j++] = av[i] - '0';
		}
		i++;
	}
	if (one == 4 && four <= 4 && j == 16)
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	input[16];

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (!((av[1][i] >= '1' && av[1][i] <= '4') || av[1][i] == ' '))
			{
				write(1, "Error\n", 6);
				return (0);
			}
			i++;
		}
		i = 0;
		if (check_input(av[1], input))
			lets_play_puzzle(input);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
