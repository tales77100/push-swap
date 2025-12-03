/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:35:09 by jsantini          #+#    #+#             */
/*   Updated: 2025/11/25 11:37:25 by jsantini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	**make_tab_tab(char **temp, int nb_elem)
{
	char	**final;
	int	i;

	final = malloc(sizeof(char *) * (nb_elem + 1));
	if (!final)
		return (NULL);
	i = 0;
	while (i < nb_elem)
	{
		final[i] = ft_strdup(temp[i + 1]);
		if (!final[i])
			return (ft_freeall(final));
		i++;
	}
	final[i] = NULL;
	return (final);
}

static t_stack	*make_list(char **arrays, int nb_elem)
{
	int	*i;
	t_stack	*array[1];

	*array = NULL;
	nb_elem--;
	while (nb_elem >= 0)
	{
		i = malloc(sizeof(int));
		if (!i)
		{
			//return(free_all_stack(*array));
			return (NULL);
		}
		*i = ft_atoi(arrays[nb_elem--]);
		if (stack_push(i, array) == -1)
		{
			//return(free_all_stack(*array));
			return (NULL);
		}
	}
	return (*array);
}

int	main(int argc, char **argv)
{
	char **temp;

	if (argc == 1)
		return (1);
	if (parsing(argc, argv) == 1)
		return (ft_printf("Error\n"));
	if (argc == 2)
		temp = ft_split(argv[1], ' ');
	else
		temp = make_tab_tab(argv, tab_of_tab_len(&(argv[1])));
	algo(make_list(temp, tab_of_tab_len(temp)), tab_of_tab_len(temp));
	return (0);
}
