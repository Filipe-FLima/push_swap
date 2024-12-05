/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:53:24 by flima             #+#    #+#             */
/*   Updated: 2024/12/05 19:37:51 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3digit(t_stack_a_b *stacks, char ch)
{
	int		top;
	int		mid;
	int		bot;
	t_stack	*head;

	if (ch == 'a')
		head = stacks->stack_a;
	else
		head = stacks->stack_b;
	top = head->content;
	mid = head->next->content;
	bot = head->next->next->content;
	cases(top, mid, bot, stacks, ch);
}

void	cases(int t, int m, int b, t_stack_a_b *stcks, char ch)
{
	if (t > m && m < b && b > t)
		ft_swap(stcks, ch);
	else if (t > m && m > b && b < t)
	{
		ft_swap(stcks, ch);
		ft_reverse_rotate(stcks, ch);
	}
	else if (t > m && m < b && b < t)
		ft_rotate(stcks, ch);
	else if (t < m && m > b && b > t)
	{
		ft_swap(stcks, ch);
		ft_rotate(stcks, ch);
	}
	else if (t < m && m > b && b < t)
		ft_reverse_rotate(stcks, ch);
}
