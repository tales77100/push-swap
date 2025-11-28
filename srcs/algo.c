/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:14:24 by jsantini          #+#    #+#             */
/*   Updated: 2025/11/28 10:20:21 by jsantini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	algo(int *array, int nb_elem)
{
	int	i;

	i = 0;
	if (!array)
	{
		ft_printf("Error\n");
		return ;
	}
	while (i < nb_elem)
	{
		ft_printf("%d\n", array[i]);
		i++;
	}
	return ;
}
