/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 21:38:07 by yongmipa          #+#    #+#             */
/*   Updated: 2022/05/03 21:26:54 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	is_char_printable(char ch)
{
	if (32 <= ch && ch <= 126)
		return (1);
	return (0);
}

int	is_number(char ch)
{
	if ('0' <= ch && ch <= '9')
		return (1);
	return (0);
}

int	is_map_info_valid(t_map *map)
{
	char	empty;
	char	obstacle;
	char	full;

	empty = map->empty;
	obstacle = map->obstacle;
	full = map->full;
	if (!is_char_printable(full))
		return (0);
	if (!is_char_printable(obstacle))
		return (0);
	if (!is_char_printable(empty))
		return (0);
	if (empty == obstacle || empty == full || obstacle == full)
		return (0);
	return (1);
}

int	is_map_valid(t_map *map, char c)
{
	if ((c != map->empty && c != map->obstacle) && c != '\n')
		return (0);
	else
		return (1);
}

int	is_not_match(int col, t_map *map)
{
	if (col != map->height)
	{
		free(map->arr[col - 1]);
		free_map(map, col - 1);
		return (1);
	}
	else
		return (0);
}
