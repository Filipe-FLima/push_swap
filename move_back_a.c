/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_back_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:06:22 by flima             #+#    #+#             */
/*   Updated: 2024/12/17 18:06:31 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_back_a(t_stack_a_b *stacks)
{
	while(stacks->stack_b != NULL)
	{
		find_max_min(stacks, 'a');
		if (stacks->stack_b->content < stacks->values->min_a)
			newmin_a(stacks);
		else if (stacks->stack_b->content > stacks->values->max_a)
			newmax_a(stacks);
		else
			middle_element(stacks); //criar essa funcao para adicionar um elemento que nao seja o max nem min
	}
	find_max_min(stacks, 'a');
	//funcao para checar se a lista esta em ordem 
}
int	find_index(t_stack_a_b *stacks, int nb, char ch)
{
	t_stack	*head;
	int		i;
	
	if (ch == 'a')
		head = stacks->stack_a;
	else
		head = stacks->stack_b;
	i = 0;
	while (head->next != NULL)
	{
		if (head->content == nb)
			break;
		head = head->next;
	}
	return (i);
}