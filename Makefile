# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/02 18:26:30 by kkafmagh          #+#    #+#              #
#    Updated: 2024/12/22 23:07:18 by kkafmagh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = 	./src/ft_printf.c ./src/ft_putchar_fd.c ./src/ft_putnbr_fd.c ./src/ft_atoi.c ./src/ptrlen.c \
		./src/hexalen.c ./src/nbrlen.c ./src/unsignednbrlen.c ./src/printptr.c ./src/hexalow.c ./src/hexacap.c \
		./src/unsft_putnbr_fd.c ./src/handlec.c ./src/handlex.c ./src/handlexcap.c ./src/handlepc.c ./src/handleu.c

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Werror -Wextra -Iincludes

CC = cc

RM = rm -f

all: ${NAME}

${NAME}: ${OBJS}
		ar rcs ${NAME} ${OBJS}
		
%.o: %.c
		${CC} ${CFLAGS} -c $< -o $@

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
