/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_newmax_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:45:43 by flima             #+#    #+#             */
/*   Updated: 2024/12/19 20:10:01 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	newmax_a(t_stack_a_b *stacks)
{
	int		i;
	int		size;
	t_stack	*head;

	head = last_node(stacks->stack_a);
	if (head->content != stacks->values->max_a)
	{
		i = find_index(stacks, stacks->values->max_a, 'a');
		size = count_nodes(stacks->stack_a);
		count_ra_rra_max(stacks, i, size);
		ft_rotate(stacks, 'a');
		return ;
	}
	ft_push(stacks, 'a');
	ft_rotate(stacks, 'a');
}

void	count_ra_rra_max(t_stack_a_b *stacks, int i, int size)
{
	int	ra;
	int	rra;

	ra = 0;
	rra = 0;
	if (size % 2 == 0)
	{
		if (i + 1 > size / 2)
			rra = (size - i) - 1;
		else
			ra = i + 1;
	}
	else
	{
		if (i > size / 2)
			rra = (size - i) - 1;
		else
			ra = i + 1;
	}
	domove_rra_ra(stacks, ra, rra, 1);
}
