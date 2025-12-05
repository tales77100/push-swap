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
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		ft_printf("|%d|\n", *(int *)head->data);
		head = head->next;
	}
	return ;
}

void	insertion_sort(t_stack *a, t_stack *b)
{
	//int	*temp;

	if (stack_is_empty(b) == 0)
		b = pb(a, b);
	while (stack_is_empty(a) != 0)
	{
		if (stack_is_empty(b) != 0 && *(int *)a->data < *(int *)b->data)
		{
			pa(b, a);
			sa(a, 1);
			pb(a, b);
			pb(a, b);
		}
		else
			pb(a, b);
		printf("|a|\n");
		aff_stack(a);
		printf("|b|\n");
		aff_stack(b);
	}
	while (stack_is_empty(b) != 0)
		pa(b, a);
	return ;	
}

int	algo(t_stack *array)
{
	int	i;
	t_stack	*b_buffer[1];

	i = 0;
	*b_buffer = NULL;
	if (!array)
		return (ft_printf("Error\n"));
	if (stack_is_empty(array) == 1)
		return (1);
	if (stack_is_empty(array) == 2 && *(array->data) > *(array->prev->data))
		return(ra(array, 1));
	insertion_sort(array, *b_buffer);
	return (0);
}
