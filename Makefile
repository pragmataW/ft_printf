# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 07:47:27 by yciftci           #+#    #+#              #
#    Updated: 2022/11/22 10:53:44 by yciftci          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libftprintf.a

CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror

FILES	:= $(shell find . -type f -name "ft_*.c")
OBJ		:= $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ) libft
	ar -rcs $(NAME) $(OBJ)

libft:
	@make -C libft
clean:
	@rm -f *.o
	@rm -f libft/*.o

fclean: clean
	@rm -f $(NAME)
	@rm -f libft/libft.a

re: fclean all

.PHONY: all clean fclean re