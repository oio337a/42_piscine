/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:20:58 by yongmipa          #+#    #+#             */
/*   Updated: 2022/05/03 15:55:41 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*answer;

	i = 0;
	answer = (int *)malloc(sizeof(int) * length);
	if (!answer)
		return (0);
	while (i < length)
	{
		answer[i] = f(tab[i]);
		i++;
	}
	return (answer);
}
