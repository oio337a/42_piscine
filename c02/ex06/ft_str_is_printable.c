/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 11:16:24 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/18 12:06:17 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 32 && str[i] <= 127)
	{
		i++;
	}
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
/*
int main()
{
	char *str1 = "aa\tbb";
	char *str2 = "AA\nZZ";
	char *str3 = "aaaAzzz";
	char *str4 = "";

	printf("%d", ft_str_is_printable(str1));
	printf("%d", ft_str_is_printable(str2));
	printf("%d", ft_str_is_printable(str3));
	printf("%d", ft_str_is_printable(str4));
	return 0;
}
*/