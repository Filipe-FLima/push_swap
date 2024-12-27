/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_rotate_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 18:35:53 by flima             #+#    #+#             */
/*   Updated: 2024/12/27 17:03:26 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_rotate_bonus(t_stack_a_b *stacks, char ch)
{
	t_stack	*head_a;
	t_stack	*head_b;

	head_a = stacks->stack_a;
	head_b = stacks->stack_b;
	if (ch == 'a')
		rotate_stack_bonus(stacks, head_a, 1, 3);
	else if (ch == 'b')
	{
		if (head_b == NULL || head_b->next == NULL)
			return ;
		rotate_stack_bonus(stacks, head_b, 2, 4);
	}
	else
	{
		if (head_a == NULL || head_a->next == NULL
			|| head_b == NULL || head_b->next == NULL)
			return ;
		rotate_stack_bonus(stacks, head_a, 0, 3);
		rotate_stack_bonus(stacks, head_b, 0, 4);
		ft_printf("rr\n");
	}
}

void	rotate_stack_bonus(t_stack_a_b *stacks, t_stack *head, int chk, int chk_stck)
{
	t_stack	*tmp;

	tmp = head;
	if (chk_stck == 3)
		stacks->stack_a = head->next;
	else if (chk_stck == 4)
		stacks->stack_b = head->next;
	while (head->next != NULL)
		head = head->next;
	head->next = tmp;
	tmp->next = NULL;
	if (chk == 1)
		ft_printf("ra\n");
	else if (chk == 2)
		ft_printf("rb\n");
}
