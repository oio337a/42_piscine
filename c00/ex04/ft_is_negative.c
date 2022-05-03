/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 22:32:53 by yongmipa          #+#    #+#             */
/*   Updated: 2022/05/03 22:58:46 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	eumsu;
	char	yangsu;

	eumsu = 'N';
	yangsu = 'P';
	if (n < 0)
	{
		write(1, &eumsu, 1);
	}
	else
	{
		write(1, &yangsu, 1);
	}
}
