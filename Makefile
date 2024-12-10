# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flima <flima@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/05 15:44:14 by flima             #+#    #+#              #
#    Updated: 2024/12/09 20:52:18 by flima            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -g -ILibft


LIBFT_DIR = Libft
LIBFT = $(LIBFT_DIR)/libft.a
SRCS = check_input_error.c  main.c manage_list.c moves_push.c \
		moves_reverse_rotate.c  moves_rotate.c moves_swap.c sort_3digit.c \
		check_sorted.c ft_quoted_arg.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

%.o:%.c push_swap.h
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	make -C $(LIBFT_DIR) clean
	rm -f $(OBJS)

fclean: clean
	make -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 