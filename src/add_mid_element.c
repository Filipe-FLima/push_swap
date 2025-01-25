/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_mid_element.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:30:38 by flima             #+#    #+#             */
/*   Updated: 2025/01/24 23:53:12 by filipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	add_mid_element(t_stack_a_b *stacks)
{
	int	i;
	int	tmp_i;
	int	size;
	int	next_index;

	tmp_i = stacks->stack_b->index;
	next_index = search_next_element_a(stacks, tmp_i);
	if (stacks->stack_a->index != next_index)
	{
		i = find_index(stacks, next_index, 'a');
		size = count_nodes(stacks->stack_a);
		count_ra_rra(stacks, i, size, 1);
		return ;
	}
	ft_push(stacks, 'a');
}

int	search_next_element_a(t_stack_a_b *stacks, int top)
{
	int		index;
	t_stack	*head_a;

	index = 0;
	while (index == 0)
	{
		top++;
		head_a = stacks->stack_a;
		while (head_a != NULL)
		{
			if (head_a->index == top)
				index = 1;
			head_a = head_a->next;
		}
	}
	return (top);
}
