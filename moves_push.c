/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:57:07 by flima             #+#    #+#             */
/*   Updated: 2024/12/02 19:25:55 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_stack_a_b *stacks, char ch)
{
	t_stack	*head_b;

	head_b = stacks->stack_b;
	if (ch == 'a')
	{
		if (head_b == NULL)
			return ;
		else if (head_b->next == NULL)
			last_node_b(stacks);
		else
		{
			push_a(stacks);
		}
	}
	else if (ch == 'b')
	{
		if (head_b == NULL)
			first_node_b(stacks);
		else
			push_b(stacks);
	}
}

void	last_node_b(t_stack_a_b *stacks)
{
	t_stack	*tmp;

	tmp = stacks->stack_a;
	stacks->stack_a = stacks->stack_b;
	stacks->stack_a->next = tmp;
	stacks->stack_b = NULL;
	ft_printf("pa\n");
}

void	push_a(t_stack_a_b *stacks)
{
	t_stack	*tmp;

	tmp = stacks->stack_a;
	stacks->stack_a = stacks->stack_b;
	stacks->stack_b = stacks->stack_b->next;
	stacks->stack_a->next = tmp;
	ft_printf("pa\n");
}

void	first_node_b(t_stack_a_b *stacks)
{
	stacks->stack_b = stacks->stack_a;
	stacks->stack_a = stacks->stack_a->next;
	stacks->stack_b->next = NULL;
	ft_printf("pb\n");
}

void	push_b(t_stack_a_b *stacks)
{
	t_stack	*tmp;

	tmp = stacks->stack_b;
	stacks->stack_b = stacks->stack_a;
	stacks->stack_a = stacks->stack_a->next;
	stacks->stack_b->next = tmp;
	ft_printf("pb\n");
}
