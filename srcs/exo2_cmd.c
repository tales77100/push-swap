/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exo2_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 17:01:02 by jsantini          #+#    #+#             */
/*   Updated: 2025/12/03 17:07:44 by jsantini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

t_stack	*sa(t_stack *a, int act)
{
	t_stack	*temp;
	t_stack	*temp2;

	if (stack_is_empty(a) <= 1)
		return(a);
	while (a->next != NULL)
		a = a->next;
	temp = a;
	temp2 = a->prev;
	temp2->next = NULL;
	temp->next = temp2;
	temp->prev = temp2->prev;
	if (temp2->prev != NULL)
		temp2->prev->next = temp;
	temp2->prev = temp;
	if (act != 0)
		ft_printf("sa\n");
	return (a);
}

t_stack	*sb(t_stack *b, int act)
{
	t_stack	*temp;
	t_stack	*temp2;

	if (stack_is_empty(b) <= 1)
		return(b);
	while (b->next != NULL)
		b = b->next;
	temp = b;
	temp2 = b->prev;
	temp2->next = NULL;
	temp->next = temp2;
	temp->prev = temp2->prev;
	if (temp2->prev != NULL)
		temp2->prev->next = temp;
	temp2->prev = temp;
	if (act != 0)
		ft_printf("sb\n");
	return (b);
}

int	ss(t_stack **a, t_stack **b)
{
	*a = sa(*a, 0);
	*b = sb(*b, 0);
	return (1);
}

int	rra(t_stack *a, int act)
{
	t_stack	*tail;

	if (stack_is_empty(a) <= 1)
		return (0);
	while (a->prev != NULL)
		a = a->prev;
	tail = a;
	while (a->next != NULL)
		a = a->next;
	a->next = tail;
	if (tail->next != NULL)
		tail->next->prev = NULL;
	tail->next = NULL;
	tail->prev = a;
	if (act != 0)
		ft_printf("rra\n");
	return (1);
}

int	rrb(t_stack *b, int act)
{
	t_stack	*tail;

	if (stack_is_empty(b) <= 1)
		return (0);
	while (b->prev != NULL)
		b = b->prev;
	tail = b;
	while (b->next != NULL)
		b = b->next;
	b->next = tail;
	if (tail->next != NULL)
		tail->next->prev = NULL;
	tail->next = NULL;
	tail->prev = b;
	if (act != 0)
		ft_printf("rrb\n");
	return (1);
}
