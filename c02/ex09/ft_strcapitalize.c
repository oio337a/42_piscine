/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:38:04 by yongmipa          #+#    #+#             */
/*   Updated: 2022/04/18 13:11:08 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (flag && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (!flag && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			flag = 0;
		}
		else
			flag = 1;
		i++;
	}
	return (str);
}
/*
int main()
{
	char str[] = "salut, COMMENT tu vas ? 42mots quAranTe-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s", str);
	return 0;
}*/