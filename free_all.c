/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:49:10 by flima             #+#    #+#             */
/*   Updated: 2024/12/19 20:03:49 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_all(t_stack_a_b *stacks)
{
	free_stack(&stacks->stack_a);
	free_stack(&stacks->stack_b);
	free(stacks->values);
	free(stacks->moves);
	free(stacks->cheapest);
}

void	free_quoted_argv(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

void	free_stack(t_stack **list)
{
	t_stack	*tmp;

	while (*list != NULL)
	{
		tmp = (*list)->next;
		free(*list);
		*list = tmp;
	}
}
