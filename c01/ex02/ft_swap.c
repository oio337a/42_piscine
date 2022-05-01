/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:46:37 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/17 18:55:11 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
int main()
{
	int c = 1;
	int d = 2;
	int *a = &c;
	int *b = &d;

	ft_swap(a, b);
	printf("%d, %d", c, d);
	return 0;
}*/