# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 15:10:24 by acinca-f@student  #+#    #+#              #
#    Updated: 2021/11/03 15:11:54 by acinca-f@student ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c
OBJS = ${SRCS:.c=.o}
NAME = ft_printf.a
HEAD = includes
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RANLIB = ranlib

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEAD}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}
	${RANLIB} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all
