/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 20:32:46 by yongmipa          #+#    #+#             */
/*   Updated: 2022/05/03 20:54:30 by yoson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_read(char *raw_data, int height)
{
	int		size;
	char	*temp;
	int		i;

	i = 0;
	size = 0;
	temp = (char *)safe_malloc(MAX_BUF_SIZE + 1);
	while (i < height)
	{
		size += read(0, temp, MAX_BUF_SIZE);
		ft_strcat(raw_data, temp);
		i++;
	}
	if (!size)
	{
		free(temp);
		return (0);
	}
	return (size);
}

t_map	*read_map1(int fd)
{
	t_map	*map;
	char	*raw_data;
	int		size;

	map = (t_map *)safe_malloc(sizeof(t_map));
	if (!read_map_info(map, read_first_line(fd)))
		return (0);
	map->arr = (char **)safe_malloc(sizeof(char *) * map->height);
	raw_data = (char *)safe_malloc(MAX_BUF_SIZE + 1);
	size = ft_read(raw_data, map->height);
	if (!size)
	{
		free_map(map, 0);
		free(raw_data);
		return (0);
	}
	map->width = 0;
	if (!parse_line(map, raw_data))
	{
		free(raw_data);
		return (0);
	}
	free(raw_data);
	return (map);
}
