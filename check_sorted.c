/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:08:50 by flima             #+#    #+#             */
/*   Updated: 2024/12/09 15:32:22 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	ft_issorted(t_stack_a_b *stacks, char ch)
{
	t_stack	*head;
	
	if (ch == 'a')
		head = stacks->stack_a;
	else
		head = stacks->stack_b;
	while (head->next != NULL)
	{
		if (head->content > head->next->content)
			return (false);
		head = head->next;
	}
	return (true);
}
