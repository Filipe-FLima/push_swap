/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 16:32:51 by flima             #+#    #+#             */
/*   Updated: 2025/01/29 15:52:00 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap(t_stack_a_b *stacks)
{
	t_stack	*bot;
	t_stack	*top;
	t_stack	*head;
	
	head = stacks->stack_a;
	top = head;
	bot = head->next->next;
	head = head->next;
	head->next = top;
	top->next = bot;
	stacks->stack_a = head;
	ft_printf("sa\n");
}

