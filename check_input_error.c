/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_error.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:37:17 by flima             #+#    #+#             */
/*   Updated: 2024/12/17 15:10:43 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_erros(char **av)
{
	check_if_digit(av);
	check_int_size(av);
}

void	check_if_digit(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = 0;
		if (av[i][j] == '\0')
			print_error_exit();
		while (j < (int)ft_strlen(av[i]))
		{
			if (!ft_isdigit(av[i][j]))
			{
				if (j == 0 && ft_strlen(av[i]) != 1
					&& (av[i][j] == '+' || av[i][j] == '-'))
				{
					j++;
					continue ;
				}
				print_error_exit();
			}
			j++;
		}
		i++;
	}
}

void	check_int_size(char **av)
{
	long	size;
	int		i;

	i = 0;
	while (av[i])
	{
		size = ft_atol(av[i]);
		if (size < INTMIN || size > INTMAX)
			print_error_exit();
		i++;
	}
}

void	check_duplicate(t_stack *listA)
{
	int		check;
	t_stack	*tmp;
	t_stack *to_free;

	to_free = listA;
	while (listA != NULL)
	{
		check = 0;
		tmp = listA;
		while (tmp != NULL)
		{
			if (listA->content == tmp->content)
				check += 1;
			if (check == 2)
			{
				free_stack(&to_free);
				print_error_exit();
			}
			tmp = tmp->next;
		}
		listA = listA->next;
	}
}

void	print_error_exit(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(0);
}
