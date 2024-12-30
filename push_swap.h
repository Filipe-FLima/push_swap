/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:49:45 by flima             #+#    #+#             */
/*   Updated: 2024/12/30 13:52:27 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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
	struct s_values		*values;
	struct s_moves		*moves;
	struct s_cheap		*cheapest;
}					t_stack_a_b;

typedef struct s_values
{
	int				max_a;
	int				min_a;
	int				max_b;
	int				min_b;
}					t_values;

typedef struct s_moves
{
	int					cost;
	int					sa;
	int					sb;
	int					ss;
	int					pa;
	int					pb;
	int					ra;
	int					rb;
	int					rr;
	int					rra;
	int					rrb;
	int					rrr;
}						t_moves;

typedef struct s_cheap
{
	int					cost;
	int					sa;
	int					sb;
	int					ss;
	int					pa;
	int					pb;
	int					ra;
	int					rb;
	int					rr;
	int					rra;
	int					rrb;
	int					rrr;
}						t_cheap;

//list management
t_stack	*new_node(int nb);
t_stack	*creat_stack(char **argv);
int		count_nodes(t_stack *list);
t_stack	*last_node(t_stack *head);
char	**ft_quoted_arg(char **argv);
//free functions
void	free_quoted_argv(char **argv);
void	free_stack(t_stack **list);
void	free_all(t_stack_a_b *stacks);
//moves functions
void	ft_swap(t_stack_a_b *stacks, char ch);
void	swap_content(t_stack *head, int check);
void	ft_rotate(t_stack_a_b *stacks, char ch);
void	rotate_stack(t_stack_a_b *stacks, t_stack *head, int chk, int chk_stck);
void	ft_reverse_rotate(t_stack_a_b *stacks, char ch);
void	rev_rotate(t_stack_a_b *stacks, t_stack *hd, int chk, int chk_stk);
void	ft_push(t_stack_a_b *stacks, char ch);
void	last_node_b(t_stack_a_b *stacks);
void	push_a(t_stack_a_b *stacks);
void	first_node_b(t_stack_a_b *stacks);
void	push_b(t_stack_a_b *stacks);
//error functions
void	check_erros(char **av, int argc);
void	check_if_digit(char **av, int ac);
void	check_int_size(char **av, int ac);
void	print_error_exit(int check_to_free, char **quoted_argv);
void	check_duplicate(t_stack *listA);
bool	ft_issorted(t_stack_a_b *stacks);
//sorting functions
void	ft_sorting(t_stack_a_b *stacks);
void	sort_3digit(t_stack_a_b *stacks, char ch);
void	sort_3digit_exit(t_stack_a_b *stacks, char ch);
void	cases(int *TMB, t_stack_a_b *stcks, char ch);
void	sort_2digit(t_stack_a_b *stacks);
void	sort_4digit(t_stack_a_b *stacks);
void	move_back_a(t_stack_a_b *stacks);
int		find_index(t_stack_a_b *stacks, int nb, char ch);
void	count_ra_rra(t_stack_a_b *stacks, int i, int size, int check);
void	domove_rra_ra(t_stack_a_b *stacks, int ra, int rra, int check);
void	newmin_a(t_stack_a_b *stacks, int check);
void	find_min(t_stack_a_b *stacks, t_stack *head, char ch);
void	find_max(t_stack_a_b *stacks, t_stack *head, char ch);
void	find_max_min(t_stack_a_b *stacks, char ch);
void	newmax_a(t_stack_a_b *stacks);
void	count_ra_rra_max(t_stack_a_b *stacks, int i, int size);
void	add_mid_element(t_stack_a_b *stacks);
int		search_next_element_a(t_stack_a_b *stacks, int top);
void	organize_stack_a(t_stack_a_b *stacks);
//move to stack b
void	sort_abovefive(t_stack_a_b *stacks);
void	do_moves(t_stack_a_b *stacks);
void	get_cheapest_moves(t_stack_a_b *stacks, int len_a);
void	check_double_moves(t_stack_a_b *stacks);
void	get_lowest_cost(t_stack_a_b *stacks, int i);
void	cost_top_stack_a(t_stack_a_b *stacks, t_stack *head_a, int i);
void	price_maxontop_stack_b(t_stack_a_b *stacks);
void	price_midontop_stack_b(t_stack_a_b *stacks, int topA);
int		search_next_element_b(t_stack_a_b *stacks, int topA);
#endif