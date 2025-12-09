/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:37:50 by jsantini          #+#    #+#             */
/*   Updated: 2025/11/25 11:38:17 by jsantini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


/* ------ pile ------- */

typedef struct s_stack
{
   struct s_stack *prev;
   struct s_stack *next;
   int *data;
} t_stack;


/***********************/


# include "../libft/libft.h"

int     parsing(int ac, char **av);
t_stack	*algo(t_stack *array);
int     tab_of_tab_len(char **temp);
int	stack_push(void *data, t_stack **array);
void	*stack_pop(t_stack **head);
t_stack	*pb(t_stack **a, t_stack *b);
t_stack	*pa(t_stack **b, t_stack *a);
t_stack	*ra(t_stack *a, int act);
t_stack	*rb(t_stack *b, int act);
int	rr(t_stack **a, t_stack **b);
t_stack	*sa(t_stack *a, int act);
t_stack	*sb(t_stack *b, int act);
int	ss(t_stack **a, t_stack **b);
int	rra(t_stack *a, int act);
int	rrb(t_stack *b, int act);
int	rrr(t_stack *a, t_stack *b);
int	stack_is_empty(t_stack *head);
int	smallest_in_stack(t_stack *array, int *data);

#endif
