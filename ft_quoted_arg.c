/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quoted_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 20:17:36 by flima             #+#    #+#             */
/*   Updated: 2024/12/29 20:41:56 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_quoted_arg(char **argv)
{
	char	**tmp;

	if (*argv[1] == '\0')
		print_error_exit(0, NULL);
	tmp = ft_split(argv[1], ' ');
	if (tmp == NULL)
		return (NULL);
	return (tmp);
}
