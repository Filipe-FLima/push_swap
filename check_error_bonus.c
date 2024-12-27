/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:37:17 by flima             #+#    #+#             */
/*   Updated: 2024/12/27 17:32:45 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	check_erros_bonus(char **av)
{
	check_if_digit_bonus(av);
	check_int_size_bonus(av);
}

void	check_if_digit_bonus(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = 0;
		if (av[i][j] == '\0')
			print_error_exit_bonus();
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
				print_error_exit_bonus();
			}
			j++;
		}
		i++;
	}
}

void	check_int_size_bonus(char **av)
{
	long	size;
	int		i;

	i = 0;
	while (av[i])
	{
		size = ft_atol(av[i]);
		if (size < INT_MIN || size > INT_MAX)
			print_error_exit_bonus();
		i++;
	}
}

void	check_duplicate_bonus(t_stack *listA)
{
	int		check;
	t_stack	*tmp;
	t_stack	*to_free;

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
				free_stack_bonus(&to_free);
				print_error_exit_bonus();
			}
			tmp = tmp->next;
		}
		listA = listA->next;
	}
}

void	print_error_exit_bonus(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(0);
}
