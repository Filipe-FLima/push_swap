/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:24:12 by flima             #+#    #+#             */
/*   Updated: 2024/12/27 14:48:26 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_a_b	stacks;

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
	check_duplicate(stacks.stack_a);
	ft_sorting(&stacks);
	free_all(&stacks);
	return (0);
}
