/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 22:50:02 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/16 20:42:16 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char num1, char num2, char num3)
{
	if (num1 == '7' && num2 == '8' && num3 == '9')
	{
		write(1, "789", 3);
		return ;
	}
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, &num3, 1);
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	num1;
	char	num2;
	char	num3;
	int		i;

	num1 = '0';
	i = 0;
	while (num1 <= '7')
	{
		num2 = num1 + 1;
		while (num2 <= '8')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				ft_print(num1, num2, num3);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }