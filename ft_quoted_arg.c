/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quoted_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 20:17:36 by flima             #+#    #+#             */
/*   Updated: 2024/12/09 20:42:42 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char **ft_quoted_arg(char **argv)
{
	char **tmp;
	
	tmp = ft_split(argv[1], ' ');
	if (tmp == NULL)
		return (NULL);
	return (tmp);
	
}

t_stack	*creat_stack_quoted(t_stack *head, char **args)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	head = new_node(ft_atoi(args[i]));
	tmp = head;
	while (args[i] != NULL)
	{
		tmp->next = new_node(atoi(args[i]));
		tmp = tmp->next;
	}
	return (head);
}
