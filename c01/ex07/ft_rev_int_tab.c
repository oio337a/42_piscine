/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 20:32:47 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/17 22:18:33 by yongmipa         ###   ########seoul.kr  */
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
/*
int	main()
{
	int tab[] = {0, 1 , 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int tab2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i = 0;
	ft_rev_int_tab(tab, 11);
	ft_rev_int_tab(tab2, 10);

	while (i < 11)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 10)
	{
		printf("%d", tab2[i]);
		i++;
	}
	return 0;
}
*/