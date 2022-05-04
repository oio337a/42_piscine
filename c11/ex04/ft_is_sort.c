/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:43:15 by yongmipa          #+#    #+#             */
/*   Updated: 2022/05/04 14:09:02 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort1(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	j;

	i = 0;
	while (i < length)
	{
		j = i + 1;
		while (j < length)
		{
			if (f(tab[i], tab[j]) < 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	j;

	i = 0;
	while (i < length)
	{
		j = i + 1;
		while (j < length)
		{
			if (f(tab[i], tab[j]) > 0)
				if (!ft_is_sort1(tab, length, f))
					return (0);
			j++;
		}
		i++;
	}
	return (1);
}
