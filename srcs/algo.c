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

int	algo(t_stack *array)
{
	int	i;
	t_stack	*b_buffer;

	i = 0;
	b_buffer = NULL;
	if (!array)
		return (ft_printf("Error\n"));
	if (stack_is_empty(array) == 1)
		return (1);
	if (stack_is_empty(array) == 2 && *(array->data) > *(array->prev->data))
		return(ra(array, 1));
	return (0);
}
