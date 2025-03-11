# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amikhail <amikhail@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/24 16:24:44 by amikhail          #+#    #+#              #
#    Updated: 2024/10/24 16:24:47 by amikhail         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# add in SRCS all .c functions
SRCS = ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c \
			ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
			ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
			ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
			ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
				ft_lstclear.c ft_lstiter.c ft_lstmap.c

FLAGS = -Wall -Werror -Wextra

INCLUDE = libft.h

OBJS = ${SRCS:.c=.o}
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all:	${NAME}

LIB = ar rcs
CC	= gcc
RM	= rm -f

${NAME}: ${OBJS} $(INCLUDE)
	 $(LIB) ${NAME} ${OBJS}

%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $<

bonus: $(OBJS) $(OBJS_BONUS)
		$(LIB) $(NAME) $(OBJS) $(OBJS_BONUS)

clean:
	${RM} ${OBJS} ${OBJS_BONUS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: clean, all, fclean, re, bonus