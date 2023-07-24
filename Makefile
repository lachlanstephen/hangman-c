# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: darkwater <marvin@42.fr>                   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/23 07:27:14 by darkwater         #+#    #+#              #
#    Updated: 2023/07/25 04:41:55 by darkwater        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= play-hangman

SRC				= main.c secret_input.c user_input.c str_functions.c

SRCPRE			= $(addprefix $(PREFIX), $(SRC))

OBJS			= $(SRCPRE:c=o)

PREFIX			= ./src/

HEADER			= ./includes/

CC				= cc

CFLAGS			= -g -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -I $(HEADER) $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
