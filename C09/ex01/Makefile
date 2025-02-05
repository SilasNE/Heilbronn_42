# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sengel <sengel@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/04 10:21:41 by sengel            #+#    #+#              #
#    Updated: 2025/02/04 10:34:14 by sengel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile für die Bibliothek (In einer separaten Makefile-Datei speichern)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJS = $(SRCS:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all