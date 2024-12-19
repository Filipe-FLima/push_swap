/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_min_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:27:35 by flima             #+#    #+#             */
/*   Updated: 2024/12/19 20:03:35 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_max_min(t_stack_a_b *stacks, char ch)
{
	t_stack	*head;

	if (ch == 'a')
		head = stacks->stack_a;
	else
		head = stacks->stack_b;
	find_max(stacks, head, ch);
	find_min(stacks, head, ch);
}

void	find_max(t_stack_a_b *stacks, t_stack *head, char ch)
{
	int	maxnb;

	maxnb = head->content;
	while (head != NULL)
	{
		if (maxnb < head->content)
			maxnb = head->content;
		head = head->next;
	}
	if (ch == 'a')
		stacks->values->max_a = maxnb;
	else
		stacks->values->max_b = maxnb;
}

void	find_min(t_stack_a_b *stacks, t_stack *head, char ch)
{
	int	maxnb;

	maxnb = head->content;
	while (head != NULL)
	{
		if (maxnb > head->content)
			maxnb = head->content;
		head = head->next;
	}
	if (ch == 'a')
		stacks->values->min_a = maxnb;
	else
		stacks->values->min_b = maxnb;
}
