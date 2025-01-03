/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:08:50 by flima             #+#    #+#             */
/*   Updated: 2024/12/27 15:15:48 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
