/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:21:29 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/26 11:12:03 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*answer;
	int	i;

	if (min >= max)
		return (0);
	len = max - min;
	answer = (int *)malloc(sizeof(int) * len);
	if (!answer)
		return (0);
	i = 0;
	while (min < max)
	{
		answer[i] = min;
		i++;
		min++;
	}
	return (answer);
}
