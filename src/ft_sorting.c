/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:47:10 by flima             #+#    #+#             */
/*   Updated: 2025/01/24 00:41:17 by filipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sorting(t_stack_a_b *stacks)
{
	if (ft_issorted(stacks))
	{
		free_stack(&stacks->stack_a);
		exit(0);
	}
	if (count_nodes(stacks->stack_a) == 2)
		sort_2digit(stacks);
	if (count_nodes(stacks->stack_a) == 3)
		sort_3digit_exit(stacks, 'a');
	if (count_nodes(stacks->stack_a) == 4)
		sort_4digit(stacks);
	yuleum_get_index(stacks->stack_a);
	ft_push(stacks, 'b');
	ft_push(stacks, 'b');
	sort_abovefive(stacks);
	sort_3digit(stacks, 'a');
	move_back_a(stacks);
}
