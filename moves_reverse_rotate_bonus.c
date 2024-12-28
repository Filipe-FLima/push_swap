/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_reverse_rotate_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:57:47 by flima             #+#    #+#             */
/*   Updated: 2024/12/28 13:06:16 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_reverse_rotate_bonus(t_stack_a_b *stacks, char ch)
{
	t_stack	*head_a;
	t_stack	*head_b;

	head_a = stacks->stack_a;
	head_b = stacks->stack_b;
	if (ch == 'a')
		rev_rotate_bonus(stacks, head_a, 1);
	else if (ch == 'b')
	{
		if (head_b == NULL || head_b->next == NULL)
			return ;
		rev_rotate_bonus(stacks, head_b, 2);
	}
	else
	{
		if (head_a == NULL || head_a->next == NULL
			|| head_b == NULL || head_b->next == NULL)
			return ;
		rev_rotate_bonus(stacks, head_a, 1);
		rev_rotate_bonus(stacks, head_b, 2);
	}
}

void	rev_rotate_bonus(t_stack_a_b *stacks, t_stack *hd, int chk_stk)
{
	t_stack	*head_tmp;

	head_tmp = hd;
	while (hd->next->next != NULL)
		hd = hd->next;
	if (chk_stk == 1)
		stacks->stack_a = hd->next;
	else if (chk_stk == 2)
		stacks->stack_b = hd->next;
	hd->next->next = head_tmp;
	hd->next = NULL;
}
