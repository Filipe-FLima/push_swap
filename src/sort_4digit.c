/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:23:02 by flima             #+#    #+#             */
/*   Updated: 2025/01/23 22:43:50 by filipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_4digit(t_stack_a_b *stacks)
{
	ft_push(stacks, 'b');
	sort_3digit(stacks, 'a');
	if (stacks->stack_b->content < stacks->stack_a->content)
		ft_push(stacks, 'a');
	else if (stacks->stack_b->content < stacks->stack_a->next->content)
	{
		ft_push(stacks, 'a');
		ft_swap(stacks, 'a');
	}
	else if (stacks->stack_b->content < stacks->stack_a->next->next->content)
	{
		ft_reverse_rotate(stacks, 'a');
		ft_push(stacks, 'a');
		ft_rotate(stacks, 'a');
		ft_rotate(stacks, 'a');
	}
	else
	{
		ft_push(stacks, 'a');
		ft_rotate(stacks, 'a');
	}
	free_stack(&stacks->stack_a);
	free_stack(&stacks->stack_b);
	exit(0);
}
