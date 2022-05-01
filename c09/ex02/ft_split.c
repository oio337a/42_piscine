/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 12:43:44 by yongmipa          #+#    #+#             */
/*   Updated: 2022/05/01 14:03:47 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_word_count(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (!is_charset(*str, charset))
		{
			count++;
			while (*str && !is_charset(*str, charset))
				str++;
		}
		str++;
	}
	return (count);
}

void	ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**answer;
	int		i;
	char	*p;

	i = 0;
	answer = (char **)malloc(sizeof(char *) * ft_word_count(str, charset) + 1);
	if (!answer)
		return (0);
	while (*str)
	{
		if (!is_charset(*str, charset))
		{
			p = str;
			while (*str && !is_charset(*str, charset))
				str++;
			answer[i] = (char *)malloc(str - p + 1);
			ft_strncpy(answer[i], p, str - p);
			i++;
		}
		else
			str++;
	}
	answer[i] = 0;
	return (answer);
}
