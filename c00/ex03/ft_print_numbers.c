/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 22:24:06 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/13 22:31:57 by yongmipa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void ft_print_numbers(void);
int	main(void)
{
	ft_print_numbers();

	return (0);
}*/

void	ft_print_numbers(void)
{
	char	n;

	n = '0';
	while (n <= 57)
	{
		write(1, &n, 1);
		n++;
	}
}
