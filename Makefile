# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   MAKEFILE                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: gmyriah <gmyriah@student.21-school.ru>     +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2021/10/05 13:05:52 by gmyriah           #+#    #+#             #
#   Updated: 2021/10/06 14:53:18 by gmyriah          ###   ########.fr       #                                                              #
# ************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_isalpha.c \
	srcs/ft_atoi.c \
	srcs/ft_bzero.c \
	srcs/ft_calloc.c \
	srcs/ft_isalnum.c \
	srcs/ft_isascii.c \
	srcs/ft_isdigit.c \
	srcs/ft_isnegative.c \
	srcs/ft_isprint.c \
	srcs/ft_isspace.c \
	srcs/ft_itoa.c \
	srcs/ft_memchr.c \
	srcs/ft_memcmp.c \
	srcs/ft_memcpy.c \
	srcs/ft_memmove.c \
	srcs/ft_memset.c \
	srcs/ft_split.c \
	srcs/ft_strchr.c \
	srcs/ft_strdup.c \
	srcs/ft_strjoin.c \
	srcs/ft_strlcat.c \
	srcs/ft_strlcpy.c \
	srcs/ft_strlen.c \
	srcs/ft_strncmp.c \
	srcs/ft_strnstr.c \
	srcs/ft_strrchr.c \
	srcs/ft_strtrim.c \
	srcs/ft_substr.c \
	srcs/ft_tolower.c \
	srcs/ft_toupper.c \
	srcs/ft_long_len.c

INCLUDES = ./includes

INC_HEADERS = -I ${INCLUDES}

HEADER = ${INCLUDES}/libft.h

OBJS	= ${SRCS:.c=.o}

CC		= gcc

AR		= ar rc

RAN		= ranlib

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.PHONY:		all clean fclean re

.c.o:		${HEADER}
			${CC} ${CFLAGS} ${INC_HEADERS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}
			${RAN} ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
