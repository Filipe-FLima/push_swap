/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:24:12 by flima             #+#    #+#             */
/*   Updated: 2024/12/10 19:37:33 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc,char **argv)
{
	t_value *values; //just to test
	t_stack_a_b stacks;
	if (argc == 1)
		exit (0);
	else if (argc == 2)
		argv = ft_quoted_arg(argv);
	else if (argc > 2)
		argv += 1;
	check_erros(argv);
	stacks.stack_a = creat_stack(argv);
	if (argc == 2)
		free_quoted_argv(argv);
	stacks.stack_b = NULL;
	//just to test the program
	values = ft_calloc(1, sizeof(t_value));
	stacks.values = values;
	check_duplicate(stacks.stack_a); //checar o que deve ser a saida
	ft_sorting(&stacks);
	// while (stacks.stack_a != NULL)
	// {
	// 	ft_printf("contentA = %d\n", stacks.stack_a->content);
	// 	stacks.stack_a = stacks.stack_a->next;
	// }
	return (0);
}

// check list 1/ colocar a funcao free e exit nas funcoes que sort 2, 3 e 4.
//			2/ alocar memoria para stacks->values /feito temporariamente
//			4/ criar funcoes new_max, new_min , new_eleme;