/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 21:34:06 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/30 21:34:10 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	get_min(int a, int b, int c)
{
	int		min;

	min = a;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	return (min);
}
