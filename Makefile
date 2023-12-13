# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lufreder <lufreder@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 10:19:53 by lufreder          #+#    #+#              #
#    Updated: 2023/12/13 10:19:55 by lufreder         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRC_DIR = src/
OBJ_DIR = obj/

# Liste des fichiers source (.c) pour ft_printf
SRC = src/ft_printf.c src/ft_putchar.c src/ft_putnbr_hex_ptr.c src/ft_putnbr_hex_xlo.c src/ft_putnbr_hex_xup.c src/ft_putnbr_u.c src/ft_putnbr.c src/ft_putptr.c src/ft_putstr.c

# Conversion des fichiers source en fichiers objet (.o)
OBJS = $(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

# Règle par défaut
all: $(NAME)

# Création de la librairie
$(NAME): $(OBJS) src/ft_printf.h
	ar rcs $(NAME) $(OBJS)

# Compilation des fichiers source
$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJS)

# Nettoyage complet (y compris la librairie)
fclean: clean
	rm -f $(NAME)

# Refaire tout
re: fclean all
