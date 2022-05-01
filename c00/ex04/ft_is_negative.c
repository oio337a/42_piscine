/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 22:32:53 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/13 22:48:51 by yongmipa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
   void ft_is_negative(int n);
   int	main(void)
   {
   ft_is_negative(2);
   ft_is_negative(-2);
   ft_is_negative(0);

   return (0);
   }*/

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
