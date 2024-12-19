/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:48:53 by flima             #+#    #+#             */
/*   Updated: 2024/12/19 19:59:43 by flima            ###   ########.fr       */
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

t_stack	*creat_stack(char **argv)
{
	t_stack	*tmp;
	t_stack	*head;
	int		i;

	i = 0;
	head = new_node(ft_atoi(argv[i++]));
	tmp = head;
	while (argv[i])
	{
		tmp->next = new_node(atoi(argv[i++]));
		tmp = tmp->next;
	}
	return (head);
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

t_stack	*last_node(t_stack *head)
{
	if (head == NULL)
		return (NULL);
	while (head->next != NULL)
		head = head->next;
	return (head);
}
