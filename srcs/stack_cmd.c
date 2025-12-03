/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_cmd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:30:40 by jsantini          #+#    #+#             */
/*   Updated: 2025/12/03 15:40:50 by jsantini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_pop(t_stack **head)
{
	t_stack *temp;

	while ((*head)->next != NULL)
		*head = (*head)->next;
	temp = *head;
	*head = (*head)->prev;
	if ((*head))
		(*head)->next = NULL;
	return (temp);
}



int	stack_push(void *data, t_stack **array)
{
	if (!*array)
	{
		*array = malloc(sizeof(t_stack));
		if (!array)
			return (-1);
		(*array)->data = data;
		(*array)->prev = NULL;
		(*array)->next = NULL;
		return (1);
	}
	while ((*array)->next != NULL)
		*array = (*array)->next;
	(*array)->next = malloc(sizeof(t_stack));
	if ((*array)->next == NULL)
		return (-1);
	(*array)->next->prev = *array;
	*array = (*array)->next;
	(*array)->data = data;
	return (1);
}
