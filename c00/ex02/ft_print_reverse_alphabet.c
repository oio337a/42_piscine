/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 22:08:26 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/13 22:22:37 by yongmipa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void ft_print_reverse_alphabet(void);
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 97)
	{
		write(1, &c, 1);
		c--;
	}
}
