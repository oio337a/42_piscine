# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/02 12:21:32 by yongmipa          #+#    #+#              #
#    Updated: 2022/05/02 13:49:45 by yongmipa         ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFALGS = -Wall -Wextra -Werror
SRCDIR = srcs
INCDIR = includes

NAME = do-op
SRCS = $(SRCDIR)/main.c $(SRCDIR)/op.c $(SRCDIR)/validate.c $(SRCDIR)/atoi.c
OBJECTS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFALGS) -c $< -o $@ -I $(INCDIR)

$(NAME): $(OBJECTS)
	$(CC) $(CFALGS) -o $(NAME) $(OBJECTS)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all