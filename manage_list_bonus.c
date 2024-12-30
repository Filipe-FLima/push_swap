/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_list_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:48:53 by flima             #+#    #+#             */
/*   Updated: 2024/12/30 18:00:11 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

t_stack	*new_node_bonus(int nb)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (node == NULL)
		return (NULL);
	node->content = nb;
	node->next = NULL;
	return (node);
}

t_stack	*creat_stack_bonus(char **argv)
{
	t_stack	*tmp;
	t_stack	*head;
	int		i;

	i = 0;
	head = new_node_bonus(ft_atoi(argv[i++]));
	tmp = head;
	while (argv[i])
	{
		tmp->next = new_node_bonus(ft_atoi(argv[i++]));
		tmp = tmp->next;
	}
	return (head);
}

int	count_nodes_bonus(t_stack *list)
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

t_stack	*last_node_bonus(t_stack *head)
{
	if (head == NULL)
		return (NULL);
	while (head->next != NULL)
		head = head->next;
	return (head);
}
