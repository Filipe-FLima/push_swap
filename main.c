/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:24:12 by flima             #+#    #+#             */
/*   Updated: 2024/12/10 14:16:45 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc,char **argv)
{
	t_stack_a_b stacks;
	if (argc == 1)
		exit (0);
	else if (argc == 2)
		argv = ft_quoted_arg(argv); //fazer uma funcao para liberar essa memoria em caso de usala depois de criar a lista
	else if (argc > 2)
		argv += 1;
	check_erros(argv);
	stacks.stack_a = creat_stack(argv);
	stacks.stack_b = NULL;
	check_duplicate(stacks.stack_a);
	if (ft_issorted(&stacks, 'a'))
		print_error_exit();
	// if (argc == 4)
	sort_3digit(&stacks, 'a');
	// if (argc == 3)
	// 	sort_2digit(&stacks);
	// // // ft_push(&stacks, 'b');
	// // // ft_push(&stacks, 'b');
	// // // ft_push(&stacks, 'b');
	// // // ft_push(&stacks, 'b');
	// // // ft_push(&stacks, 'b');
	// // // ft_push(&stacks, 'b');
	// // // ft_push(&stacks, 'a');
	
	// while (stacks.stack_a != NULL)
	// {
	// 	ft_printf("contentA = %d\n", stacks.stack_a->content);
	// 	stacks.stack_a = stacks.stack_a->next;
	// }
	// // ft_printf("\n");
	// // while (stacks.stack_b != NULL)
	// // {
	// // 	ft_printf("contentB = %d\n", stacks.stack_b->content);
	// // 	stacks.stack_b = stacks.stack_b->next;
	// // }
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