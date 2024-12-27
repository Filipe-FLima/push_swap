/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quoted_arg_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 20:17:36 by flima             #+#    #+#             */
/*   Updated: 2024/12/27 17:12:21 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

char	**ft_quoted_arg_bonus(char **argv)
{
	char	**tmp;

	tmp = ft_split(argv[1], ' ');
	if (tmp == NULL)
		return (NULL);
	return (tmp);
}

void	free_quoted_argv_bonus(char **argv)
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
bool	ft_issorted_bonus(t_stack_a_b *stacks)
{
	t_stack	*head;

	head = stacks->stack_a;
	while (head->next != NULL)
	{
		if (head->content > head->next->content)
			return (false);
		head = head->next;
	}
	return (true);
}