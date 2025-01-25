/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_back_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:06:22 by flima             #+#    #+#             */
/*   Updated: 2025/01/24 00:20:51 by filipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	move_back_a(t_stack_a_b *stacks)
{
	while (stacks->stack_b != NULL)
	{
		find_max_min(stacks, 'a');
		if (stacks->stack_b->index < stacks->values->min_a)
			newmin_a(stacks, 1);
		else if (stacks->stack_b->index > stacks->values->max_a)
			newmax_a(stacks);
		else
			add_mid_element(stacks);
	}
	find_max_min(stacks, 'a');
	organize_stack_a(stacks);
}

int	find_index(t_stack_a_b *stacks, int nb, char ch)
{
	t_stack	*head;
	int		i;

	if (ch == 'a')
		head = stacks->stack_a;
	else
		head = stacks->stack_b;
	i = 0;
	while (head->next != NULL)
	{
		if (head->index == nb)
			break ;
		i++;
		head = head->next;
	}
	return (i);
}
