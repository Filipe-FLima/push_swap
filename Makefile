# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flima <flima@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/05 15:44:14 by flima             #+#    #+#              #
#    Updated: 2024/12/27 18:02:34 by flima            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BONUS = checker

CC = cc
CFLAGS = -Wall -Wextra -Werror -g


LIBFT_DIR = Libft
LIBFT = $(LIBFT_DIR)/libft.a
SRCS = check_input_error.c  push_swap.c manage_list.c moves_push.c \
		moves_reverse_rotate.c  moves_rotate.c moves_swap.c sort_3digit.c \
		check_sorted.c ft_quoted_arg.c sort_4digit.c ft_sorting.c free_all.c \
		add_newmax_a.c add_newmin_a.c check_min_max.c move_back_a.c add_mid_element.c \
		get_cheapest.c get_total_cost.c sort_big_numbers.c
		
BONUS_SRCS = check_error_bonus.c checker_bonus.c free_all_bonus.c ft_quoted_arg_bonus.c \
				manage_list_bonus.c moves_push_bonus.c moves_reverse_rotate_bonus.c \
				moves_rotate_bonus.c moves_swap_bonus.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

%.o:%.c push_swap.h
	$(CC) $(CFLAGS) -c -o $@ $<

bonus: $(NAME_BONUS)

$(NAME_BONUS): $(BONUS_OBJS) $(Libft)
	$(CC) $(CFLAGS) $(BONUS_OBJS) $(LIBFT) -o $(NAME_BONUS)

clean:
	make -C $(LIBFT_DIR) clean
	rm -f $(OBJS)

fclean: clean
	make -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 