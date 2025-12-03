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
   void *data;
} t_stack;


/***********************/


# include "../libft/libft.h"

int     parsing(int ac, char **av);
int	algo(t_stack *array, int nb_elem);
int     tab_of_tab_len(char **temp);
int	stack_push(void *data, t_stack **array);
void	*stack_pop(t_stack **head);


#endif
