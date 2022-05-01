/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 11:00:21 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/18 11:14:41 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	char *str1 = "123123";
	char *str2 = "abba";
	char *str3 = "aaaA";
	char *str4 = "";

	printf("%d", ft_str_is_lowercase(str1));
	printf("%d", ft_str_is_lowercase(str2));
	printf("%d", ft_str_is_lowercase(str3));
	printf("%d", ft_str_is_lowercase(str4));
	return 0;
}*/
