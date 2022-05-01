/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:38:35 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/18 21:34:21 by yongmipa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hex(char str)
{
	char	*hex;
	char	mok;
	char	namuji;

	hex = "0123456789abcdef";
	mok = hex[str / 16];
	namuji = hex[str % 16];
	write(1, "\\", 1);
	write(1, &mok, 1);
	write(1, &namuji, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 127)
			write(1, &str[i], 1);
		else
			ft_hex(str[i]);
		i++;
	}
}
/*
int main()
{
	char str[] = "\t\a\e\r\tCoucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
	return 0;
}*/
