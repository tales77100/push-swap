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

void	aff_stack(t_stack *head)
{
	if (stack_is_empty(head) == 0)
		return ;
	while (head->next != NULL)
		head = head->next;
	while (head != NULL)
	{
		ft_printf("|%d|\n", *(int *)head->data);
		head = head->prev;
	}
	return ;
}

t_stack	*sort_three(t_stack *head)
{
	while (a->next != NULL)
		a = a->next;
	if (*(int *)a->data > *(int *)a->prev->data)
		a = sa(a, 1);
	a = ra(a, 1);
	return (a);
}

void	insertion_sort(t_stack *a, t_stack *b)
{
	while (stack_is_empty(a) >= 4)
		b = pb(&a, b);
	a = sort_three(a);
	aff_stack(a);
	ft_printf(" -\n a\n");
	aff_stack(b);
	ft_printf(" -\n b\n");
	return ;
}

t_stack	*algo(t_stack *array)
{
	int	i;
	t_stack	*b_buffer[1];

	i = 0;
	*b_buffer = NULL;
	if (!array)
	{
		ft_printf("Error\n");
		return (NULL);
	}
	if (stack_is_empty(array) == 1)
		return (NULL);
	if (stack_is_empty(array) == 2 && *(array->data) > *(array->prev->data))
		return(ra(array, 1));
	insertion_sort(array, *b_buffer);
	return (0);
}
