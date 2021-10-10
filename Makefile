# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   MAKEFILE                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: gmyriah <gmyriah@student.21-school.ru>     +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2021/10/05 13:05:52 by gmyriah           #+#    #+#             #
#   Updated: 202#   Updated: 2021/10/10 15:40:20 by gmyriah          ###   ########.fr       #                                              #
# ************************************************************************** #

NAME		= libft.a

SRCS		= ft_isalpha.c \
		ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isnegative.c \
		ft_isprint.c \
		ft_isspace.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_long_len.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

BONUS		= ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \

HEADER		= libft.h

OBJS		= ${SRCS:.c=.o}

BONUS_OBJS 	= ${BONUS:.c=.o}

CC			= gcc

AR			= ar rcs

RAN			= ranlib

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

.PHONY:		all clean fclean re bonus

.c.o:		${HEADER}
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}
			${RAN} ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS} ${BONUS_OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus:		${OBJS} ${BONUS_OBJS}
			${AR} ${NAME} ${OBJS} ${BONUS_OBJS}
