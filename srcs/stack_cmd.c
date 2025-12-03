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

int	stack_is_empty(t_list *head)
{
	int	i;
	if (!head)
		return (0);
	i = 1;
	while (head->next != NULL)
		head = head->next;
	while (head->prev -> NULL)
	{
		head = head->prev;
		i++;
	}
	return (i);
}

t_stack	*stack_pop(t_stack **head)
{
	void *temp;
	t_stack *temp2;

	while ((*head)->next != NULL)
		*head = (*head)->next;
	temp = (*head)->data;
	temp2 = *head;
	*head = (*head)->prev;
	if ((*head))
		(*head)->next = NULL;
	temp2->data = NULL;
	free(temp2);
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
