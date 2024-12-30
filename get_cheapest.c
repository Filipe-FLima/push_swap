/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cheapest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 23:24:15 by marvin            #+#    #+#             */
/*   Updated: 2024/12/30 14:33:14 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_cheapest_moves(t_stack_a_b *stacks, int len_a)
{
	int		i;
	t_stack	*head_a;

	i = 0;
	head_a = stacks->stack_a;
	while (i < len_a)
	{
		cost_top_stack_a(stacks, head_a, i);
		if (head_a->content > stacks->values->max_b || \
			head_a->content < stacks->values->min_b)
			price_maxontop_stack_b(stacks);
		else
			price_midontop_stack_b(stacks, head_a->content);
		check_double_moves(stacks);
		get_lowest_cost(stacks, i);
		head_a = head_a->next;
		i++;
	}
}

void	check_double_moves(t_stack_a_b *stacks)
{
	stacks->moves->rr = 0;
	stacks->moves->rrr = 0;
	while (stacks->moves->ra != 0 && stacks->moves->rb != 0)
	{
		stacks->moves->ra--;
		stacks->moves->rb--;
		stacks->moves->rr++;
	}
	while (stacks->moves->rra != 0 && stacks->moves->rrb != 0)
	{
		stacks->moves->rra--;
		stacks->moves->rrb--;
		stacks->moves->rrr++;
	}
}

void	get_lowest_cost(t_stack_a_b *stacks, int i)
{
	stacks->moves->cost = stacks->moves->ra + stacks->moves->pb
		+ stacks->moves->rb + stacks->moves->rra + stacks->moves-> rr
		+ stacks->moves->rrb + stacks->moves->rrr;
	if (i == 0 || stacks->cheapest->cost > stacks->moves->cost)
	{
		stacks->cheapest->cost = stacks->moves->cost;
		stacks->cheapest->pb = stacks->moves->pb;
		stacks->cheapest->ra = stacks->moves->ra;
		stacks->cheapest->rb = stacks->moves->rb;
		stacks->cheapest->rr = stacks->moves->rr;
		stacks->cheapest->rra = stacks->moves->rra;
		stacks->cheapest->rrb = stacks->moves->rrb;
		stacks->cheapest->rrr = stacks->moves->rrr;
	}
}
