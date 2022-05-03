/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 12:52:18 by yongmipa          #+#    #+#             */
/*   Updated: 2022/05/03 22:59:35 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* 
	첫번째 if 깊이가 길이랑 같다면 arr 다 채웠으니 출력 후 리턴(재귀 빠져나오기)
	while 깊이 1씩 늘리면서 재귀 진입
*/
void	jaegui(int prev, char *arr, int depth, int length)
{
	int		i;

	if (depth == length)
	{
		write(1, arr, length);
		write(1, ", ", 2);
		return ;
	}
	i = prev;
	while (++i <= 10 - length + depth)
	{
		arr[depth] = '0' + i;
		jaegui(i, arr, depth + 1, length);
	}
}

void	last(int i)
{
	char	c;

	while (i <= 9)
	{
		c = '0' + i;
		write(1, &c, 1);
		i++;
	}
}

// 오름 차순 출력 이라 n = 2이면 while 문에 8까지 반복 마지막처리는 함수 만들어서 해결 할 예정
// arr 첫자리 i를 만큼 입력 n = 2라면 0x 1x 2x 3x ... 7x 순
// i = 0 부터 재귀 진입
// 1 은 depth
void	ft_print_combn(int n)
{
	int		i;
	char	arr[10];

	i = 0;
	while (i < 10 - n)
	{
		arr[0] = '0' + i;
		jaegui(i++, arr, 1, n);
	}
	last(i);
}
