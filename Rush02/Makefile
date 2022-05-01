# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nayeokim <nayeokim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/30 16:47:39 by nayeokim          #+#    #+#              #
#    Updated: 2022/04/30 16:50:17 by nayeokim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = ft.h
SRC = main.c
OBJ = $(SRC:.c=.o)
NAME = rush-02
GCC = gcc
OPTION = -Wall -Wextra -Werror
RM = rm -f

all : $(NAME)

.c.o : 
	$(GCC) $(OPTION) -c -I $(HEADER) $< -o ${<:.c=.o}

$(NAME) : $(OBJ)
	$(GCC) $(OPTION) -I $(HEADER) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re