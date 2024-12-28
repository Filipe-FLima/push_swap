/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:37:17 by flima             #+#    #+#             */
/*   Updated: 2024/12/28 14:43:57 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	check_erros_bonus(char **av, int ac)
{
	check_if_digit_bonus(av, ac);
	check_int_size_bonus(av, ac);
}

void	check_if_digit_bonus(char **av, int ac)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = 0;
		if (av[i][j] == '\0')
			print_error_exit_bonus(ac, av);
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
				print_error_exit_bonus(ac, av);
			}
			j++;
		}
		i++;
	}
}

void	check_int_size_bonus(char **av, int ac)
{
	long	size;
	int		i;

	i = 0;
	while (av[i])
	{
		size = ft_atol(av[i]);
		if (size < INT_MIN || size > INT_MAX)
			print_error_exit_bonus(ac, av);
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
				print_error_exit_bonus(0, NULL);
			}
			tmp = tmp->next;
		}
		listA = listA->next;
	}
}

void	print_error_exit_bonus(int check_to_free, char **quoted_argv)
{
	if (check_to_free == 2)
		free_quoted_argv_bonus(quoted_argv);
	ft_putstr_fd("Error\n", 2);
	exit(0);
}
