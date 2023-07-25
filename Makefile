# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: darkwater <marvin@42.fr>                   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/23 07:27:14 by darkwater         #+#    #+#              #
#    Updated: 2023/07/26 01:51:01 by darkwater        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= play-hangman

SRC				= main.c secret_input.c user_input.c str_functions.c ascii_art_lives.c ft_ascii_art.c

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
