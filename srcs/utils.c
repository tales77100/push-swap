/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 14:35:51 by jsantini          #+#    #+#             */
/*   Updated: 2025/12/03 14:38:08 by jsantini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int	tab_of_tab_len(char **temp)
{
	int	i;

	i = 0;
	while (temp[i] != NULL)
		i++;
	return (i);
}

int	smallest_in_stack(t_stack *array, int *data)
{
	if (stack_is_empty(array) <= 0)
		return (1);
	while (array->next != NULL)
		array = array ->next;
	while (array->prev != NULL && *(int *)(array->data) >= *data)
		array = array->prev;
	if (*(int *)(array->data) < *data)
		return (0);
	return (1);
}
