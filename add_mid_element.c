/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_mid_element.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:30:38 by flima             #+#    #+#             */
/*   Updated: 2024/12/19 20:06:09 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_mid_element(t_stack_a_b *stacks)
{
	int	i;
	int	size;
	int	next_element;

	next_element = serch_next_element(stacks, stacks->stack_b->content);
	if (stacks->stack_a->content != next_element)
	{
		i = find_index(stacks, next_element, 'a');
		size = count_nodes(stacks->stack_a);
		count_ra_rra(stacks, i, size, 1);
		return ;
	}
	ft_push(stacks, 'a');
}

int	serch_next_element(t_stack_a_b *stacks, int topb)
{
	int		index;
	t_stack	*head_a;

	index = 0;
	while (index == 0)
	{
		topb++;
		head_a = stacks->stack_a;
		while (head_a != NULL)
		{
			if (head_a->content == topb)
				index = 1;
			head_a = head_a->next;
		}
	}
	return (topb);
}
