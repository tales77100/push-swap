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

int	pb(t_stack *a, t_stack *b)
{
	if (stack_is_empty(a) == 0)
		return (0);
	if (stack_push(stack_pop(&a), &b) == -1)
	{
		// free_all_stack(); <----- x2 pour a et b;
		return (-1);
	}
	ft_printf("pb\n");
	return (1);
}

int	pa(t_stack *b, t_stack *a)
{
	if (stack_is_empty(b) == 0)
		return (0);
	if (stack_push(stack_pop(&b), &a) == -1)
	{
		// free_all_stack(); <----- x2 pour a et b;
		return (-1);
	}
	ft_printf("pa\n");
	return (1);
}

int	ra(t_stack *a, int act)
{
	t_stack	*head;

	if (stack_is_empty(a) <= 1)
		return (0);
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
	return (1);
}

int	rb(t_stack *b, int act)
{
	t_stack	*head;

	if (stack_is_empty(b) <= 1)
		return (0);
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
	return (1);
}

int	rr(t_stack *a, t_stack *b)
{
	ra(a, 0);
	rb(b, 0);
	printf("rr\n");
	return (1);
}
