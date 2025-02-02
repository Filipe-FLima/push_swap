/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:24:12 by flima             #+#    #+#             */
/*   Updated: 2025/01/25 11:42:31 by filipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_a_b	stacks;

	if (argc == 1)
		exit(0);
	else if (argc == 2)
		argv = ft_quoted_arg(argv);
	else if (argc > 2)
		argv += 1;
	check_erros(argv, argc);
	stacks.stack_a = creat_stack(argv);
	if (argc == 2)
		free_quoted_argv(argv);
	stacks.stack_b = NULL;
	check_duplicate(stacks.stack_a);
	ft_sorting(&stacks);
	return (0);
}
