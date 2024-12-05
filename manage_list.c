/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:48:53 by flima             #+#    #+#             */
/*   Updated: 2024/12/02 19:25:04 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_node(int nb)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (node == NULL)
		return (NULL);
	node->content = nb;
	node->next = NULL;
	return (node);
}

t_stack	*creat_stack(int argc, char **argv)
{
	t_stack	*head;
	t_stack	*tmp;
	int		i;

	i = 1;
	head = new_node(ft_atoi(argv[i]));
	tmp = head;
	while (++i < argc)
	{
		tmp->next = new_node(atoi(argv[i]));
		tmp = tmp->next;
	}
	return (head);
}

void	clear_stack(t_stack *list)
{
	t_stack	*tmp;

	while (list != NULL)
	{
		tmp = list->next;
		free(list);
		list = tmp;
	}
}

int	count_nodes(t_stack *list)
{
	int	count;

	count = 0;
	while (list != NULL)
	{
		count++;
		list = list->next;
	}
	return (count);
}
