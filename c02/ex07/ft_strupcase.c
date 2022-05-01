/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:23:26 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/18 12:30:02 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char str1[] = "aa\tbb";
	char str2[] = "AA\nZaZ";
	char str3[] = "aaaAzzz";
	char str4[] = "";

	printf("%s", ft_strupcase(str1));
	printf("%s", ft_strupcase(str2));
	printf("%s", ft_strupcase(str3));
	printf("%s", ft_strupcase(str4));
	return 0;
}*/
