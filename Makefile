# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ramunoz <ramunoz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/27 14:24:27 by ramunoz           #+#    #+#              #
#    Updated: 2025/11/28 12:41:08 by ramunoz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a



SRC = ft_printf.c \
		handle_conv.c \
		print_char.c \
		print_string.c \
		print_int.c \
		print_unsigned.c \
		print_hex.c \
		print_pointer.c

OBJS = ${SRC:.c=.o}

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I .

%.o:%.c
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o $@

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re