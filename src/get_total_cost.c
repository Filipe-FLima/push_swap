/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_total_cost.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:06:22 by flima             #+#    #+#             */
/*   Updated: 2025/01/23 22:52:25 by filipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	cost_top_stack_a(t_stack_a_b *stacks, t_stack *head_a, int i)
{
	int	len_a;

	stacks->moves->pb = 1;
	stacks->moves->ra = 0;
	stacks->moves->rra = 0;
	if (head_a->content == stacks->stack_a->content)
		return ;
	len_a = count_nodes(stacks->stack_a);
	if (len_a % 2 == 0)
	{
		if (i + 1 > len_a / 2)
			stacks->moves->rra = (len_a - i);
		else
			stacks->moves->ra = i;
	}
	else
	{
		if (i > len_a / 2)
			stacks->moves->rra = (len_a - i);
		else
			stacks->moves->ra = i;
	}
}

void	price_maxontop_stack_b(t_stack_a_b *stacks)
{
	int		i;
	int		len_b;

	stacks->moves->rb = 0;
	stacks->moves->rrb = 0;
	if (stacks->stack_b->content == stacks->values->max_b)
		return ;
	i = find_index(stacks, stacks->values->max_b, 'b');
	len_b = count_nodes(stacks->stack_b);
	if (len_b % 2 == 0)
	{
		if (i + 1 > len_b / 2)
			stacks->moves->rrb = (len_b - i);
		else
			stacks->moves->rb = i;
	}
	else
	{
		if (i > len_b / 2)
			stacks->moves->rrb = (len_b - i);
		else
			stacks->moves->rb = i;
	}
}

void	price_midontop_stack_b(t_stack_a_b *stacks, int topA)
{
	int	i;
	int	len_b;
	int	next_index;

	stacks->moves->rb = 0;
	stacks->moves->rrb = 0;
	next_index = search_next_element_b(stacks, topA);
	if (stacks->stack_b->index == next_index)
		return ;
	i = find_index(stacks, next_index, 'b');
	len_b = count_nodes(stacks->stack_b);
	if (len_b % 2 == 0)
	{
		if (i + 1 > len_b / 2)
			stacks->moves->rrb = (len_b - i);
		else
			stacks->moves->rb = i;
	}
	else
	{
		if (i > len_b / 2)
			stacks->moves->rrb = (len_b - i);
		else
			stacks->moves->rb = i;
	}
}

int	search_next_element_b(t_stack_a_b *stacks, int topA)
{
	t_stack	*head_b;
	int		i;

	i = 0;
	while (i == 0)
	{
		head_b = stacks->stack_b;
		topA--;
		while (head_b != NULL)
		{
			if (head_b->index == topA)
				i = 1;
			head_b = head_b->next;
		}
	}
	return (topA);
}
