# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/02 18:26:30 by kkafmagh          #+#    #+#              #
#    Updated: 2024/12/03 16:29:15 by kkafmagh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	ft_printf.c ft_putchar_fd.c ft_putnbr_fd.c ft_atoi.c ptrlen.c \
		hexalen.c nbrlen.c unsignednbrlen.c printptr.c hexalow.c hexacap.c \
		unsft_putnbr_fd.c handlec.c handlex.c handlexcap.c handlepc.c handleu.c \

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra -I ./

CC = cc

RM = rm -f

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re:
		fclean all

.PHONY:	all clean fclean re