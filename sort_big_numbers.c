/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 22:39:37 by marvin            #+#    #+#             */
/*   Updated: 2024/12/22 22:39:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_Abovefive(t_stack_a_b *stacks)
{
    t_moves     *moves;
    t_cheap     *cheap;
    t_values    *values;

    moves = ft_calloc(1, sizeof(t_moves));
    cheap = ft_calloc(1, sizeof(t_cheap));
    values = ft_calloc(1, sizeof(t_values));
    stacks->moves = moves;
    stacks->cheapest = cheap;
    stacks->values = values;
    while (count_nodes(stacks->stack_a) > 3)
    {
        find_max_min(stacks, 'b');
        get_cheapest_moves(stacks);
        do_moves(stacks);
    }
}

void    do_moves(t_stack_a_b *stacks)
{
    while (stacks->cheapest->ra-- != 0)
        ft_rotate(stacks, 'a');
    while (stacks->cheapest->rb-- != 0)
        ft_rotate(stacks, 'b');
    while (stacks->cheapest->rr-- != 0)
        ft_rotate(stacks, 'c');
    while (stacks->cheapest->rra-- != 0)
        ft_reverse_rotate(stacks, 'a');
    while (stacks->cheapest->rrb-- != 0)
        ft_reverse_rotate(stacks, 'b');
    while (stacks->cheapest->rrr-- != 0)
        ft_reverse_rotate(stacks, 'c');
    while (stacks->cheapest->pb-- != 0)
        ft_push(stacks, 'b');
}
