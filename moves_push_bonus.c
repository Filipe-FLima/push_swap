/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_push_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:57:07 by flima             #+#    #+#             */
/*   Updated: 2024/12/28 13:09:09 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_push_bonus(t_stack_a_b *stacks, char ch)
{
	t_stack	*head_b;

	head_b = stacks->stack_b;
	if (ch == 'a')
	{
		if (head_b == NULL)
			return ;
		else if (head_b->next == NULL)
			last_node_b_bonus(stacks);
		else
		{
			push_a_bonus(stacks);
		}
	}
	else if (ch == 'b')
	{
		if (head_b == NULL)
			first_node_b_bonus(stacks);
		else
			push_b_bonus(stacks);
	}
}

void	last_node_b_bonus(t_stack_a_b *stacks)
{
	t_stack	*tmp;

	tmp = stacks->stack_a;
	stacks->stack_a = stacks->stack_b;
	stacks->stack_a->next = tmp;
	stacks->stack_b = NULL;
}

void	push_a_bonus(t_stack_a_b *stacks)
{
	t_stack	*tmp;

	tmp = stacks->stack_a;
	stacks->stack_a = stacks->stack_b;
	stacks->stack_b = stacks->stack_b->next;
	stacks->stack_a->next = tmp;
}

void	first_node_b_bonus(t_stack_a_b *stacks)
{
	stacks->stack_b = stacks->stack_a;
	stacks->stack_a = stacks->stack_a->next;
	stacks->stack_b->next = NULL;
}

void	push_b_bonus(t_stack_a_b *stacks)
{
	t_stack	*tmp;

	tmp = stacks->stack_b;
	stacks->stack_b = stacks->stack_a;
	stacks->stack_a = stacks->stack_a->next;
	stacks->stack_b->next = tmp;
}
