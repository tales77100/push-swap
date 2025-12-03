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
	if (act != 0)
		ft_printf("sa\n");
	return (1)
}

int	sb(t_list *b, int act)
{
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
