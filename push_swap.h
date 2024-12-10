/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:49:45 by flima             #+#    #+#             */
/*   Updated: 2024/12/09 20:51:52 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"

# define INTMAX 2147483647
# define INTMIN -2147483648

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}					t_stack;

typedef struct s_stack_a_b
{
	struct s_stack	*stack_a;
	struct s_stack	*stack_b;
}					t_stack_a_b;

//list management
t_stack	*new_node(int nb);
t_stack	*creat_stack(char **argv);
void	clear_stack(t_stack **list);
int		count_nodes(t_stack *list);
t_stack	*creat_stack_quoted(t_stack *head, char **args);
char **ft_quoted_arg(char **argv);
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
void	check_erros(char **av);
void	check_if_digit(char **av);
void	check_int_size(char **av);
void	print_error_exit(void);
void	check_duplicate(t_stack *listA);
bool	ft_issorted(t_stack_a_b *stacks, char ch);
//sorting functions
void	sort_3digit(t_stack_a_b *stacks, char ch);
void	cases(int *TMB, t_stack_a_b *stcks, char ch);
void	sort_2digit(t_stack_a_b *stacks);

#endif