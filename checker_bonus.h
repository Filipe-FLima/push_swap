/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:49:45 by flima             #+#    #+#             */
/*   Updated: 2024/12/28 15:06:19 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "Libft/libft.h"

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}					t_stack;

typedef struct s_stack_a_b
{
	struct s_stack		*stack_a;
	struct s_stack		*stack_b;
}					t_stack_a_b;

char	**ft_quoted_arg_bonus(char **argv);
//errors functions
void	check_erros_bonus(char **av, int ac);
void	check_if_digit_bonus(char **av, int ac);
void	check_int_size_bonus(char **av, int ac);
void	check_duplicate_bonus(t_stack *listA);
void	print_error_exit_bonus(int check_to_free, char **quoted_argv);
//list
t_stack	*last_node_bonus(t_stack *head);
int		count_nodes_bonus(t_stack *list);
t_stack	*creat_stack_bonus(char **argv);
t_stack	*new_node_bonus(int nb);
//free
void	free_quoted_argv_bonus(char **argv);
void	free_all_bonus(t_stack_a_b *stacks);
void	free_stack_bonus(t_stack **list);
void	free_error_exit(t_stack_a_b *stacks, char *move);
//moves
void	ft_push_bonus(t_stack_a_b *stacks, char ch);
void	last_node_b_bonus(t_stack_a_b *stacks);
void	push_a_bonus(t_stack_a_b *stacks);
void	first_node_b_bonus(t_stack_a_b *stacks);
void	push_b_bonus(t_stack_a_b *stacks);
void	ft_reverse_rotate_bonus(t_stack_a_b *stacks, char ch);
void	rev_rotate_bonus(t_stack_a_b *stacks, t_stack *hd, int chk_stk);
void	rotate_stack_bonus(t_stack_a_b *stacks, t_stack *head, int chk_stck);
void	ft_rotate_bonus(t_stack_a_b *stacks, char ch);
void	ft_swap_bonus(t_stack_a_b *stacks, char ch);
void	swap_content_bonus(t_stack *head);
bool	ft_issorted_bonus(t_stack_a_b *stacks);
void	do_move_bonus(t_stack_a_b *stacks, char *move);
void	check_moves(t_stack_a_b *stacks);
#endif