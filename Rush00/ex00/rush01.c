/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 11:33:59 by wonlim            #+#    #+#             */
/*   Updated: 2022/04/16 19:18:58 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char *elements)
{
	int	x_index;

	x_index = 0;
	while (x_index < x)
	{
		if (x_index == 0)
			ft_putchar(elements[0]);
		else if (x_index == x - 1)
			ft_putchar(elements[2]);
		else
			ft_putchar(elements[1]);
		x_index++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	char	*elements;
	int		y_index;

	elements = "/*\\* *\\*/";
	y_index = 0;
	while (y_index < y)
	{
		if (y_index == 0)
			print_line(x, elements);
		else if (y_index == y - 1)
			print_line(x, elements + 6);
		else
			print_line(x, elements + 3);
		y_index++;
	}
}
