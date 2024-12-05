/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 16:32:51 by flima             #+#    #+#             */
/*   Updated: 2024/12/02 14:53:52 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack_a_b *stacks, char ch)
{
	t_stack	*head_a;
	t_stack	*head_b;

	head_a = stacks->stack_a;
	head_b = stacks->stack_b;
	if (ch == 'a')
		swap_content(head_a, 1);
	else if (ch == 'b')
	{
		if (head_b == NULL || head_b->next == NULL)
			return ;
		swap_content(head_b, 2);
	}
	else
	{
		if (head_a == NULL || head_a->next == NULL || head_b == NULL
			|| head_b->next == NULL)
			return ;
		swap_content(head_a, 0);
		swap_content(head_b, 0);
		ft_printf("ss\n");
	}
}

void	swap_content(t_stack *head, int check)
{
	int	tmp;

	tmp = head->content;
	head->content = head->next->content;
	head->next->content = tmp;
	if (check == 1)
		ft_printf("sa\n");
	else if (check == 2)
		ft_printf("sb\n");
}
