/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:30:16 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/18 12:37:45 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char str1[] = "aa\tBb";
	char str2[] = "AzA\nZaZ";
	char str3[] = "aaaAzzz";
	char str4[] = "";

	printf("%s", ft_strlowcase(str1));
	printf("%s", ft_strlowcase(str2));
	printf("%s", ft_strlowcase(str3));
	printf("%s", ft_strlowcase(str4));
	return 0;
}*/
