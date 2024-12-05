/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:49:45 by flima             #+#    #+#             */
/*   Updated: 2024/12/05 19:34:11 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <libft.h>

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
t_stack	*creat_stack(int argc, char **argv);
void	clear_stack(t_stack *list);
int		count_nodes(t_stack *list);
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
void	check_erros(int ac, char **av);
void	check_if_digit(char **av);
void	check_int_size(char **av);
void	print_error_exit(void);
void	check_duplicate(t_stack *listA);
//sorting functions
void	sort_3digit(t_stack_a_b *stacks, char ch);
void	cases(int t, int m, int b, t_stack_a_b *stcks, char ch);

#endif