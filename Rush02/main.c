/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayeokim <nayeokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:28:22 by nayeokim          #+#    #+#             */
/*   Updated: 2022/04/30 16:46:06 by nayeokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(void)
{
	int		fd;
	char	buff[1];

	fd = open("tears.dict", O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, buff, 1))
		write(1, buff, 1);
	close(fd);
	return (0);
}
