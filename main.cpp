/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:24:12 by flima             #+#    #+#             */
/*   Updated: 2024/12/05 15:40:03 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc,char **agrv)
{
	t_stack_a_b stacks;
	check_erros(argc, agrv);
	stacks.stack_a = creat_stack(argc, agrv);
	stacks.stack_b = NULL;
	check_duplicate(stacks.stack_a);
	if (argc == 4)
		sort_3digit(&stacks, 'a');
	// ft_push(&stacks, 'b');
	// ft_push(&stacks, 'b');
	// ft_push(&stacks, 'b');
	// ft_push(&stacks, 'b');
	// ft_push(&stacks, 'b');
	// ft_push(&stacks, 'b');
	// ft_push(&stacks, 'a');
	
	// while (stacks.stack_a != NULL)
	// {
	// 	ft_printf("contentA = %d\n", stacks.stack_a->content);
	// 	stacks.stack_a = stacks.stack_a->next;
	// }
	// ft_printf("\n");
	// while (stacks.stack_b != NULL)
	// {
	// 	ft_printf("contentB = %d\n", stacks.stack_b->content);
	// 	stacks.stack_b = stacks.stack_b->next;
	// }
	return (0);
}

// int	main(int argc,char **agrv)
// {
// 	t_stack_a_b *stacks;

// 	stacks = (t_stack_a_b *)malloc(sizeof(t_stack_a_b));
// 	stacks->stack_a = creat_stack(argc, agrv);
// 	stacks->stack_b = creat_stack(argc, agrv);
// 	ft_reverse_rotate(stacks, 'c');
// 	while (stacks->stack_a != NULL)
// 	{
// 		printf("content = %d\n", stacks->stack_a->content);
// 		stacks->stack_a = stacks->stack_a->next;
// 	}
// 	ft_printf("\n");
// 	// ft_reverse_rotate(stacks, 'b');
// 	while (stacks->stack_b != NULL)
// 	{
// 		printf("content = %d\n", stacks->stack_b->content);
// 		stacks->stack_b = stacks->stack_b->next;
// 	}
// 	// ft_printf("\n");
// 	// stacks->stack_a = creat_stack(argc, agrv);
// 	// stacks->stack_b = creat_stack(argc, agrv);
// 	// ft_rotate(stacks, 'c');
// 	// while (stacks->stack_a != NULL)
// 	// {
// 	// 	printf("content = %d\n", stacks->stack_a->content);
// 	// 	stacks->stack_a = stacks->stack_a->next;
// 	// }
// 	// ft_printf("\n");
// 	// // ft_rotate(stacks, 'b');
// 	// while (stacks->stack_b != NULL)
// 	// {
// 	// 	printf("content = %d\n", stacks->stack_b->content);
// 	// 	stacks->stack_b = stacks->stack_b->next;
// 	// }
// 	return (0);
// }