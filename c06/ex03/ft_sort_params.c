/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 20:41:13 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/25 15:19:23 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	return (s1[i] - s2[i]);
}

void	ft_putstr(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int		i;
	int		j;

	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			j = 1;
			while (j < ac - 1)
			{
				if (ft_strcmp(av[j], av[j + 1]) > 0)
				{
					ft_swap(&av[j], &av[j + 1]);
				}
				j++;
			}
			i++;
		}
	}
	ft_putstr(ac, av);
	return (0);
}
