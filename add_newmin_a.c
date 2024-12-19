/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_newmin_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:48:14 by flima             #+#    #+#             */
/*   Updated: 2024/12/19 20:09:26 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	newmin_a(t_stack_a_b *stacks, int check)
{
	int	i;
	int	size;

	if (stacks->stack_a->content != stacks->values->min_a)
	{
		i = find_index(stacks, stacks->values->min_a, 'a');
		size = count_nodes(stacks->stack_a);
		count_ra_rra(stacks, i, size, check);
		return ;
	}
	if (check == 1)
		ft_push(stacks, 'a');
}

void	domove_rra_ra(t_stack_a_b *stacks, int ra, int rra, int check)
{
	while (ra != 0)
	{
		ft_rotate(stacks, 'a');
		ra--;
	}
	while (rra != 0)
	{
		ft_reverse_rotate(stacks, 'a');
		rra--;
	}
	if (check == 1)
		ft_push(stacks, 'a');
}

void	count_ra_rra(t_stack_a_b *stacks, int i, int size, int check)
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
	domove_rra_ra(stacks, ra, rra, check);
}

void	organize_stack_a(t_stack_a_b *stacks)
{
	newmin_a(stacks, 0);
}
