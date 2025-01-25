/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:08:50 by flima             #+#    #+#             */
/*   Updated: 2025/01/24 23:45:09 by filipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

bool	ft_issorted(t_stack_a_b *stacks)
{
	t_stack	*head;

	head = stacks->stack_a;
	while (head->next != NULL)
	{
		if (head->content > head->next->content)
			return (false);
		head = head->next;
	}
	return (true);
}

void	yuleum_get_index(t_stack *stack_a)
{
	t_stack	*tmp;
	t_stack	*tmp1;
	int		content;
	
	tmp = stack_a;
	while (tmp != NULL)
	{
		tmp->index = 0;
		tmp = tmp->next;
	}
	tmp = stack_a;
	tmp1 = stack_a;
	while (stack_a != NULL)
	{
		content = stack_a->content;
		tmp = tmp1;
		while (tmp != NULL)
		{
			if (content > tmp->content)
				stack_a->index++;
			tmp = tmp->next;
		}
		stack_a = stack_a->next;
	}
}
