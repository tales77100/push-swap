/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exo_cmd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:44:55 by jsantini          #+#    #+#             */
/*   Updated: 2025/12/03 17:00:59 by jsantini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int	pb(t_list a, t_list b)
{
	if (stack_is_empty(a) == 0)
		return (0);
	if (stack_push(stack_pop(&a), &b) == NULL)
	{
		// free_all_stack(); <----- x2 pour a et b;
		return (-1);
	}
	ft_printf("pb\n");
	return (1);
}

int	pa(t_list b, t_list a)
{
	if (stack_is_empty(b) == 0)
		return (0);
	if (stack_push(stack_pop(&b), &a) == NULL)
	{
		// free_all_stack(); <----- x2 pour a et b;
		return (-1);
	}
	ft_printf("pa\n");
	return (1);
}

int	ra(t_list *a, int act)
{
	if (act != 0)
		ft_printf("ra\n");
	return (1);
}

int	rb(t_list *b, int act)
{
	if (act != 0)
		ft_printf("rb\n");
	return (1);
}

int	rr(t_list *a, t_list *b)
{
	ra(a, 0);
	rb(b, 0);
	printf("rr\n");
	return (1);
}
