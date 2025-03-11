NAME = minitalk

CLIENT = client
SERVER = server

SERVER_BONUS = server_bonus
CLIENT_BONUS = client_bonus

SRCS_CLIENT = client.c
SRCS_SERVER = server.c

SRCS_CLIENT_BONUS = client_bonus.c
SRCS_SERVER_BONUS = server_bonus.c 

PRINTF_PATH		=	ft_printf
PRINTF			=	$(PRINTF_PATH)/libftprintf.a

# INCLUDE = ft_printf.h

OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)
OBJS_SERVER = $(SRCS_SERVER:.c=.o)
OBJS_CLIENT_BONUS = $(SRCS_CLIENT_BONUS:.c=.o)
OBJS_SERVER_BONUS = $(SRCS_SERVER_BONUS:.c=.o)

FLAGS = -Wall -Werror -Wextra
CC	= gcc
RM	= rm -f

all: $(PRINTF) $(SERVER) $(CLIENT)

bonus: $(PRINTF) $(SERVER_BONUS) $(CLIENT_BONUS)

$(PRINTF):
		make -C $(PRINTF_PATH)

$(SERVER): $(OBJS_SERVER)
	$(CC) $(FLAGS) $(OBJS_SERVER) -o $(SERVER) $(PRINTF)

$(CLIENT): $(OBJS_CLIENT)
	$(CC) $(FLAGS) $(OBJS_CLIENT) -o $(CLIENT) $(PRINTF)

$(SERVER_BONUS): $(OBJS_SERVER_BONUS)
	$(CC) $(FLAGS) $(OBJS_SERVER_BONUS) -o $(SERVER_BONUS) $(PRINTF)

$(CLIENT_BONUS): $(OBJS_CLIENT_BONUS)
	$(CC) $(FLAGS) $(OBJS_CLIENT_BONUS) -o $(CLIENT_BONUS) $(PRINTF)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	make -C $(PRINTF_PATH) clean
	${RM} ${OBJS_SERVER} ${OBJS_CLIENT} ${OBJS_SERVER_BONUS} ${OBJS_CLIENT_BONUS}

fclean: clean
	make -C $(PRINTF_PATH) fclean
	${RM} $(SERVER) $(CLIENT) $(SERVER_BONUS) $(CLIENT_BONUS)

re: fclean all bonus

.PHONY: clean, all, fclean, re, bonus