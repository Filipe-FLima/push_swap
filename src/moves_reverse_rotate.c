/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_reverse_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:57:47 by flima             #+#    #+#             */
/*   Updated: 2025/01/23 22:43:50 by filipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_reverse_rotate(t_stack_a_b *stacks, char ch)
{
	t_stack	*head_a;
	t_stack	*head_b;

	head_a = stacks->stack_a;
	head_b = stacks->stack_b;
	if (ch == 'a')
		rev_rotate(stacks, head_a, 1, 3);
	else if (ch == 'b')
	{
		if (head_b == NULL || head_b->next == NULL)
			return ;
		rev_rotate(stacks, head_b, 2, 4);
	}
	else
	{
		if (head_a == NULL || head_a->next == NULL
			|| head_b == NULL || head_b->next == NULL)
			return ;
		rev_rotate(stacks, head_a, 0, 3);
		rev_rotate(stacks, head_b, 0, 4);
		ft_printf("rrr\n");
	}
}

void	rev_rotate(t_stack_a_b *stacks, t_stack *hd, int chk, int chk_stk)
{
	t_stack	*head_tmp;

	head_tmp = hd;
	while (hd->next->next != NULL)
		hd = hd->next;
	if (chk_stk == 3)
		stacks->stack_a = hd->next;
	else if (chk_stk == 4)
		stacks->stack_b = hd->next;
	hd->next->next = head_tmp;
	hd->next = NULL;
	if (chk == 1)
		ft_printf("rra\n");
	else if (chk == 2)
		ft_printf("rrb\n");
}
