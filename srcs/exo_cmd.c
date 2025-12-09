/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exo_cmd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:44:55 by jsantini          #+#    #+#             */
/*   Updated: 2025/12/04 12:37:15 by jsantini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

t_stack	*pb(t_stack **a, t_stack *b)
{
	if (stack_is_empty(*a) == 0)
		return (b);
	if (stack_push(stack_pop(a), &b) == -1)
	{
		// free_all_stack(); <----- x2 pour a et b;
		return (NULL);
	}
	while (b->next != NULL)
		b = b->next;
	ft_printf("pb\n");
	return (b);
}

t_stack	*pa(t_stack **b, t_stack *a)
{
	if (stack_is_empty(*b) == 0)
		return (a);
	if (stack_push(stack_pop(b), &a) == -1)
	{
		// free_all_stack(); <----- x2 pour a et b;
		return (NULL);
	}
	while (a->next != NULL)
		a = a->next;
	ft_printf("pa\n");
	return (a);
}

t_stack	*ra(t_stack *a, int act)
{
	t_stack	*head;

	if (stack_is_empty(a) <= 1)
		return (a);
	while (a->next != NULL)
		a = a->next;
	head = a;
	while (a->prev != NULL)
		a = a->prev;
	a->prev = head;
	head->next = a;
	if (head->prev != NULL)
		head->prev->next = NULL;
	head->prev = NULL;
	if (act != 0)
		ft_printf("ra\n");
	return (head);
}

t_stack	*rb(t_stack *b, int act)
{
	t_stack	*head;

	if (stack_is_empty(b) <= 1)
		return (b);
	while (b->next != NULL)
		b = b->next;
	head = b;
	while (b->prev != NULL)
		b = b->prev;
	b->prev = head;
	head->next = b;
	if (head->prev != NULL)
		head->prev->next = NULL;
	head->prev = NULL;
	if (act != 0)
		ft_printf("rb\n");
	while (b->next != NULL)
		b = b->next;
	return (b);
}

int	rr(t_stack **a, t_stack **b)
{
	*a = ra(*a, 0);
	*b = rb(*b, 0);
	printf("rr\n");
	return (1);
}
