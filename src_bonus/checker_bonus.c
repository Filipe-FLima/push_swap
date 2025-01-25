/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:24:12 by flima             #+#    #+#             */
/*   Updated: 2024/12/29 21:35:33 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	do_move_bonus(t_stack_a_b *stacks, char *move)
{
	if (!ft_strncmp(move, "ra\n", 3))
		ft_rotate_bonus(stacks, 'a');
	else if (!ft_strncmp(move, "rb\n", 3))
		ft_rotate_bonus(stacks, 'b');
	else if (!ft_strncmp(move, "rr\n", 3))
		ft_rotate_bonus(stacks, 'r');
	else if (!ft_strncmp(move, "rra\n", 4))
		ft_reverse_rotate_bonus(stacks, 'a');
	else if (!ft_strncmp(move, "rrb\n", 4))
		ft_reverse_rotate_bonus(stacks, 'b');
	else if (!ft_strncmp(move, "rrr\n", 4))
		ft_reverse_rotate_bonus(stacks, 'r');
	else if (!ft_strncmp(move, "sa\n", 3))
		ft_swap_bonus(stacks, 'a');
	else if (!ft_strncmp(move, "sb\n", 3))
		ft_swap_bonus(stacks, 'b');
	else if (!ft_strncmp(move, "ss\n", 3))
		ft_swap_bonus(stacks, 's');
	else if (!ft_strncmp(move, "pa\n", 3))
		ft_push_bonus(stacks, 'a');
	else if (!ft_strncmp(move, "pb\n", 3))
		ft_push_bonus(stacks, 'b');
	else
		free_error_exit(stacks, move);
}

void	check_moves(t_stack_a_b *stacks)
{
	char	*move;
	int		size_a;

	size_a = count_nodes_bonus(stacks->stack_a);
	if (size_a == 1 && count_nodes_bonus(stacks->stack_b) == 0)
		return ;
	while (true)
	{
		move = get_next_line(0);
		if (move == NULL)
			break ;
		do_move_bonus(stacks, move);
		free(move);
		move = NULL;
	}
	if (ft_issorted_bonus(stacks) && count_nodes_bonus(stacks->stack_b) == 0)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

int	main(int argc, char **argv)
{
	t_stack_a_b	stacks;

	if (argc == 1)
		exit(0);
	else if (argc == 2)
		argv = ft_quoted_arg_bonus(argv);
	else if (argc > 2)
		argv += 1;
	check_erros_bonus(argv, argc);
	stacks.stack_a = creat_stack_bonus(argv);
	if (argc == 2)
		free_quoted_argv_bonus(argv);
	stacks.stack_b = NULL;
	check_duplicate_bonus(stacks.stack_a);
	check_moves(&stacks);
	free_all_bonus(&stacks);
	return (0);
}
