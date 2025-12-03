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

# include "psuh_swap.h"

int	sa(t_list *a, int act)
{
	t_list	*temp;
	t_list	*temp2;

	if (stack_is_empty(a) <= 1)
		return(0);
	while (a->next != NULL)
		a = a->next;
	temp = a;
	temp2 = a->prev;
	temp2->next = NULL;
	temp->next = temp2
	temp->prev = temp2->prev
	if (temp2->prev != NULL)
		temp2->prev->next = temp;
	temp2->prev = temp;
	if (act != 0)
		ft_printf("sa\n");
	return (1)
}

int	sb(t_list *b, int act)
{
	t_list	*temp;
	t_list	*temp2;

	if (stack_is_empty(b) <= 1)
		return(0);
	while (b->next != NULL)
		b = b->next;
	temp = b;
	temp2 = b->prev;
	temp2->next = NULL;
	temp->next = temp2
	temp->prev = temp2->prev
	if (temp2->prev != NULL)
		temp2->prev->next = temp;
	temp2->prev = temp;
	if (act != 0)
		ft_printf("sb\n");
	return (1);
}

int	ss(t_list *a, t_list *b)
{
	sa(a, 0);
	sb(b, 0);
	return (1);
}

int	rra(t_list *a, int act)
{
	if (act != 0)
		ft_printf("rra\n");
	return (1);
}

int	rrb(t_list *b, int act)
{
	if (act != 0)
		ft_printf("rra\n");
	return (1);
}
