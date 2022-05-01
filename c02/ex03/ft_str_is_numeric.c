/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:53:53 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/18 11:11:43 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	char *str1 = "123123";
	char *str2 = "aaaaa";
	char *str3 = "123s123";
	char *str4 = "";

	printf("%d", ft_str_is_numeric(str1));
	printf("%d", ft_str_is_numeric(str2));
	printf("%d", ft_str_is_numeric(str3));
	printf("%d", ft_str_is_numeric(str4));
	return 0;
}*/