/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:56:15 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/19 21:25:07 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] && s2[i] && s1[i] == s2[i]) && i < n - 1)
		i++;
	if ((s1[i] == '\0' && s2[i] == '\0') || n == 0)
		return (0);
	return (s1[i] - s2[i]);
}
