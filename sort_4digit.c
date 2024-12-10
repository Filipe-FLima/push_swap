/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:23:02 by flima             #+#    #+#             */
/*   Updated: 2024/12/10 15:16:56 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_4digit(t_stack_a_b *stacks)
{
	int	b_nb;
	
	ft_push(stacks, 'b');
	sort_3digit(stacks, 'a');
	b_nb = stacks->stack_b->content;
	if (b_nb < stacks->stack_a->content)
		ft_push(stacks, 'a');
	else if (b_nb < stacks->stack_a->next->content)
	{
		ft_push(stacks, 'a');
		ft_swap(stacks, 'a');
	}
	else
	{
		ft_reverse_rotate(stacks, 'a');
		ft_push(stacks, 'a');
		ft_rotate(stacks, 'a');
		ft_rotate(stacks, 'a');
	}
}

void	sort_5digit(t_stack_a_b *stacks)
{
	int b_nb;

	ft_push(stacks, 'b');
	ft_push(stacks, 'b');
	sort_3digit(stacks, 'a');
	while (stacks->stack_b != NULL)
	{
		b_nb = stacks->stack_b->content;
	if (b_nb < stacks->stack_a->content)
		ft_push(stacks, 'a');
	else if (b_nb < stacks->stack_a->next->content)
	{
		ft_push(stacks, 'a');
		ft_swap(stacks, 'a');
	}
	else
	{
		ft_reverse_rotate(stacks, 'a');
		ft_push(stacks, 'a');
	}
	}
}
