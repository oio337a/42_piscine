# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/01 13:50:02 by yongmipa          #+#    #+#              #
#    Updated: 2022/05/01 16:52:19 by yongmipa         ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFALGS = -Wall -Wextra -Werror -c
SRCDIR = srcs
INCDIR = includes

NAME = libft.a
SRCS = $(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strcmp.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_swap.c
OBJECTS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFALGS) $< -o $@ -I $(INCDIR)

$(NAME): $(OBJECTS)
	ar cr $@ $(OBJECTS)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all