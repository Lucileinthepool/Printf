# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lufreder <lufreder@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 14:48:01 by lufreder          #+#    #+#              #
#    Updated: 2023/11/29 13:15:20 by lufreder         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME) $(libft)

$(NAME): $(OBJ)
	$ AR -r $(NAME) $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all
