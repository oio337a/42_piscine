/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 15:08:35 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/24 18:56:06 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	i;
	long	n;

	i = 2;
	n = nb;
	if (n <= 1)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	long	i;
	long	n;

	i = 2;
	n = nb;
	if (nb <= 2)
		return (2);
	while (i * i <= n)
	{
		if (n % i == 0)
		{
			while (1)
			{
				if (ft_is_prime(n))
					return (n);
				n++;
			}
		}
		i++;
	}
	return (n);
}
