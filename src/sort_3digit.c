/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:53:24 by flima             #+#    #+#             */
/*   Updated: 2025/01/23 22:43:50 by filipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_3digit(t_stack_a_b *stacks, char ch)
{
	int		top_mid_bot[3];
	t_stack	*head;

	if (ch == 'a')
		head = stacks->stack_a;
	else
		head = stacks->stack_b;
	top_mid_bot[0] = head->content;
	top_mid_bot[1] = head->next->content;
	top_mid_bot[2] = head->next->next->content;
	cases(top_mid_bot, stacks, ch);
}

void	sort_3digit_exit(t_stack_a_b *stacks, char ch)
{
	int		top_mid_bot[3];
	t_stack	*head;

	head = stacks->stack_a;
	top_mid_bot[0] = head->content;
	top_mid_bot[1] = head->next->content;
	top_mid_bot[2] = head->next->next->content;
	cases(top_mid_bot, stacks, ch);
	free_stack(&stacks->stack_a);
	exit(0);
}

void	cases(int *TMB, t_stack_a_b *stcks, char ch)
{
	if (TMB[0] > TMB[1] && TMB[1] < TMB[2] && TMB[2] > TMB[0])
		ft_swap(stcks, ch);
	else if (TMB[0] > TMB[1] && TMB[1] > TMB[2] && TMB[2] < TMB[0])
	{
		ft_swap(stcks, ch);
		ft_reverse_rotate(stcks, ch);
	}
	else if (TMB[0] > TMB[1] && TMB[1] < TMB[2] && TMB[2] < TMB[0])
		ft_rotate(stcks, ch);
	else if (TMB[0] < TMB[1] && TMB[1] > TMB[2] && TMB[2] > TMB[0])
	{
		ft_swap(stcks, ch);
		ft_rotate(stcks, ch);
	}
	else if (TMB[0] < TMB[1] && TMB[1] > TMB[2] && TMB[2] < TMB[0])
		ft_reverse_rotate(stcks, ch);
}

void	sort_2digit(t_stack_a_b *stacks)
{
	if (!ft_issorted(stacks))
		ft_swap(stacks, 'a');
	free_stack(&stacks->stack_a);
	exit(0);
}
