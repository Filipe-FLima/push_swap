/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quoted_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 20:17:36 by flima             #+#    #+#             */
/*   Updated: 2024/12/27 15:09:11 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_quoted_arg(char **argv)
{
	char	**tmp;

	tmp = ft_split(argv[1], ' ');
	if (tmp == NULL)
		return (NULL);
	return (tmp);
}
