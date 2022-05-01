/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 21:33:18 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/30 21:33:36 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	*safe_malloc(int size)
{
	void	*p;

	p = malloc(size);
	if (!p)
		exit(0);
	return (p);
}

int	free_map_info(t_map *map, char *info)
{
	if (map)
		free(map);
	free(info);
	return (0);
}

void	free_map(t_map *map, int size)
{
	int		i;

	i = -1;
	while (++i < size)
		free(map->arr[i]);
	free(map->arr);
	free(map);
}
