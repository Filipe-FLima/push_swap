/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_newmin_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:48:14 by flima             #+#    #+#             */
/*   Updated: 2024/12/17 17:28:47 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	newmin_a(t_stack_a_b *stacks)
{
	int i;
	int size;

	if (stacks->stack_a->content != stacks->values->min_a)
	{
		i = find_index(stacks, stacks->values->min_a, 'a');
		size = count_nodes(stacks->stack_a);
		count_ra_rra(stacks, i, size);
		return ;
	}
	ft_push(stacks, 'a');
}

void	domove_rra_ra(t_stack_a_b *stacks, int ra, int rra)
{
	while (ra != 0)
		ft_rotate(stacks, 'a');
	while (rra != 0)
		ft_reverse_rotate(stacks, 'a');
	ft_push(stacks, 'a');
}

void	count_ra_rra(t_stack_a_b *stacks, int i, int size)
{
	int	ra;
	int	rra;
	
	ra = 0;
	rra = 0;
	if (size % 2 == 0)
	{
		if (i + 1 > size / 2)
			rra = size - i;
		else
			ra = i;
	}
	else
	{
		if (i > size / 2)
			rra = size - i;
		else
			ra = i;
	}
	domove_rra_ra(stacks, ra, rra);
}
