/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 12:25:44 by yongmipa          #+#    #+#             */
/*   Updated: 2022/05/04 20:45:06 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H
# include <unistd.h>

int		add(int a, int b);
int		miner(int a, int b);
int		mul(int a, int b);
int		div(int a, int b);
int		modul(int a, int b);

int		atoi(char *str);
int		ft_is_valid(char *arg);
void	ft_putnbr(int nb);
int		do_op(int a, char op, int b);

#endif