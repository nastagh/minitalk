
NAME = libftprintf.a

SRCS = ft_printf.c \
		utils/ft_print_char.c \
		utils/ft_print_string.c \
		utils/ft_print_pointer.c \
		utils/ft_print_number.c \
		utils/ft_print_unsigned.c \
		utils/ft_print_hexadecimal.c \
		utils/ft_get_count_of_division.c \

# SRCS_BONUS = .c

LIBFT_PATH		=	libft
LIBFT			=	$(LIBFT_PATH)/libft.a

FLAGS = -Wall -Werror -Wextra

INCLUDE = ft_printf.h

OBJS = ${SRCS:.c=.o}
# OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all:	$(LIBFT) ${NAME}

LIB = ar rcs
CC	= gcc
RM	= rm -f

$(LIBFT):
		make -C $(LIBFT_PATH)

${NAME}: ${OBJS} $(INCLUDE)
	cp $(LIBFT) $(NAME)
	 $(LIB) ${NAME} ${OBJS}

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(LIBFT_PATH)

# bonus: $(OBJS) $(OBJS_BONUS)
# 		$(LIB) $(NAME) $(OBJS) $(OBJS_BONUS)

clean:
	make -C $(LIBFT_PATH) clean
	${RM} ${OBJS}
# clean: ${RM} ${OBJS} ${OBJS_BONUS}

fclean: clean
	make -C $(LIBFT_PATH) fclean
	${RM} ${NAME}

re: fclean all

.PHONY: clean, all, fclean, re, libft