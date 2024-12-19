/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:24:12 by flima             #+#    #+#             */
/*   Updated: 2024/12/19 17:35:25 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv) 
{
    t_stack_a_b stacks;
	t_values *values1 = NULL; //test

    if (argc == 1)
        exit(0);
    else if (argc == 2)
        argv = ft_quoted_arg(argv);
    else if (argc > 2)
        argv += 1;

    check_erros(argv);

    stacks.stack_a = creat_stack(argv);
    if (argc == 2)
        free_quoted_argv(argv);
    stacks.stack_b = NULL;

    // Alocar memória para values test
    values1 = malloc(1 * sizeof(t_values));
	stacks.values = values1;
    check_duplicate(stacks.stack_a);
    ft_sorting(&stacks);

    // Liberação de memória
    free_stack(&stacks.stack_a);
    free(values1);

    return 0;
}
// int	main(int argc,char **argv)
// {
// 	t_stack_a_b stacks;
// 	if (argc == 1)
// 		exit (0);
// 	else if (argc == 2)
// 		argv = ft_quoted_arg(argv);
// 	else if (argc > 2)
// 		argv += 1;
// 	check_erros(argv);
// 	stacks.stack_a = creat_stack(argv);
// 	if (argc == 2)
// 		free_quoted_argv(argv);
// 	stacks.stack_b = NULL;
// 	stacks.values = ft_calloc(1, sizeof(t_value)); //just to test the program
// 	stacks.values->max_a = 45;
// 	check_duplicate(stacks.stack_a); //checar o que deve ser a saida
// 	ft_sorting(&stacks);
// 	free_stack(&stacks.stack_a);
// 	return (0);
// }

//			2/ alocar memoria para stacks->values /feito temporariamente
//			4/ criar funcoes new_max, new_min , new_eleme;