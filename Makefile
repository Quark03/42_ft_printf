# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 15:10:24 by acinca-f@student  #+#    #+#              #
#    Updated: 2021/12/06 08:51:19 by acinca-f@student ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c  \
	ft_printers \
	ft_printf_utils.c \
	ft_printf_counters.c \
	libft/ft_atoi.c \
	libft/ft_bzero.c \
	libft/ft_calloc.c \
	libft/ft_isalnum.c \
	libft/ft_isalpha.c \
	libft/ft_isascii.c \
	libft/ft_isdigit.c \
	libft/ft_isprint.c \
	libft/ft_itoa.c \
	libft/ft_memchr.c \
	libft/ft_memcmp.c \
	libft/ft_memcpy.c \
	libft/ft_memmove.c \
	libft/ft_memset.c \
	libft/ft_putchar_fd.c \
	libft/ft_putendl_fd.c \
	libft/ft_putnbr_fd.c \
	libft/ft_putstr_fd.c \
	libft/ft_split.c \
	libft/ft_strchr.c \
	libft/ft_strdup.c \
	libft/ft_striteri.c \
	libft/ft_strjoin.c \
	libft/ft_strlcat.c \
	libft/ft_strlcpy.c \
	libft/ft_strlen.c \
	libft/ft_strmapi.c \
	libft/ft_strncmp.c \
	libft/ft_strnstr.c \
	libft/ft_strrchr.c \
	libft/ft_strtrim.c \
	libft/ft_substr.c \
	libft/ft_tolower.c \
	libft/ft_toupper.c \

OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a
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
	cd libft && ${MAKE}
	cd ..

all: ${NAME}

clean:
	${RM} ${OBJS}
	cd libft && ${MAKE} clean
	cd ..

fclean: clean
	${RM} ${NAME}
	cd libft && ${MAKE} fclean
	cd ..

re:	fclean all
	cd libft && ${MAKE} re
	cd ..

.PHONY: all fclean clean re
	cd libft && ${MAKE} .PHONY
