/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:49:10 by flima             #+#    #+#             */
/*   Updated: 2024/12/28 15:05:08 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	free_all_bonus(t_stack_a_b *stacks)
{
	free_stack_bonus(&stacks->stack_a);
	free_stack_bonus(&stacks->stack_b);
}

void	free_stack_bonus(t_stack **list)
{
	t_stack	*tmp;

	while (*list != NULL)
	{
		tmp = (*list)->next;
		free(*list);
		*list = tmp;
	}
}

void	free_error_exit(t_stack_a_b *stacks, char *move)
{
	free_all_bonus(stacks);
	free(move);
	print_error_exit_bonus(0, NULL);
	exit(0);
}
