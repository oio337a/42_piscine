/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 21:34:40 by yongmipa          #+#    #+#             */
/*   Updated: 2022/05/03 21:30:02 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	bsq(int fd)
{
	t_map		*map;
	t_square	*square;

	map = 0;
	if (fd > 0)
		map = read_map(fd);
	else if (fd == 0)
		map = read_map1(fd);
	if (!map)
	{
		ft_putstr(MAP_ERR);
		return ;
	}
	square = find_square(map);
	print_answer(map, square);
	free_map(map, map->height);
	free(square);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	fd;

	if (argc == 1)
		bsq(0);
	else
	{
		i = 1;
		while (i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd == -1)
				ft_putstr(MAP_ERR);
			else
				bsq(fd);
			if (argc > 2 && i < argc - 1)
				ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
