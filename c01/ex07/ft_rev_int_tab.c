/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 20:32:47 by yongmipa          #+#    #+#             */
/*   Updated: 2022/05/03 23:00:18 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = size / 2;
	tmp = 0;
	while (0 < i)
	{
		tmp = tab[i - 1];
		tab[i - 1] = tab[size - i];
		tab[size - i] = tmp;
		i--;
	}
}
