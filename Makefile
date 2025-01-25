# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: filipe <filipe@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/05 15:44:14 by flima             #+#    #+#              #
#    Updated: 2025/01/23 22:18:30 by filipe           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BONUS = checker

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

LIBFT_DIR = Libft
INCLUDE = includes
OBJ_DIR = objs/
LIBFT = $(LIBFT_DIR)/libft.a
SRCS = src/check_input_error.c  src/push_swap.c src/manage_list.c src/moves_push.c \
		src/moves_reverse_rotate.c  src/moves_rotate.c src/moves_swap.c src/sort_3digit.c \
		src/check_sorted.c src/ft_quoted_arg.c src/sort_4digit.c src/ft_sorting.c src/free_all.c \
		src/add_newmax_a.c src/add_newmin_a.c src/check_min_max.c src/move_back_a.c src/add_mid_element.c \
		src/get_cheapest.c src/get_total_cost.c src/sort_big_numbers.c
		
BONUS_SRCS = src_bonus/check_error_bonus.c src_bonus/checker_bonus.c src_bonus/free_all_bonus.c \
				src_bonus/ft_quoted_arg_bonus.c src_bonus/manage_list_bonus.c src_bonus/moves_push_bonus.c \
				src_bonus/moves_reverse_rotate_bonus.c src_bonus/moves_rotate_bonus.c src_bonus/moves_swap_bonus.c

OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))
BONUS_OBJS = $(addprefix $(OBJ_DIR), $(BONUS_SRCS:.c=.o))

all: $(NAME)

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -I$(INCLUDE) $(LIBFT) -o $(NAME)

$(OBJ_DIR)%.o : %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c -o $@ $< -I$(INCLUDE)

bonus: $(NAME_BONUS)

$(NAME_BONUS): $(LIBFT) $(BONUS_OBJS)
	$(CC) $(CFLAGS) $(BONUS_OBJS) -I$(INCLUDE) $(LIBFT) -o $(NAME_BONUS)

clean:
	@make -C $(LIBFT_DIR) clean
	@rm -rf $(OBJ_DIR)

fclean: clean
	@make -C $(LIBFT_DIR) fclean
	@rm -f $(NAME) $(NAME_BONUS)

re: fclean all

.PHONY: all clean fclean re 