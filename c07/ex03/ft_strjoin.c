/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:33:17 by yongmipa          #+#    #+#             */
/*   Updated: 2022/05/01 17:30:01 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	strslen(char **strs, int size)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*answer;
	int		len;
	int		i;

	i = 0;
	if (size == 0)
	{
		answer = (char *)malloc(1);
		answer[0] = '\0';
		return (answer);
	}
	len = strslen(strs, size);
	answer = (char *)malloc(len + ((size - 1) * ft_strlen(sep)) + 1);
	if (!answer)
		return (0);
	i = 0;
	answer[0] = '\0';
	while (i < size)
	{
		ft_strcat(answer, strs[i]);
		if (i < size - 1)
			ft_strcat(answer, sep);
		i++;
	}
	return (answer);
}
