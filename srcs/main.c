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

static int	*make_list(char **arrays, int nb_elem)
{
	int	i;
	int	*array;

	array = ft_calloc(nb_elem, sizeof(int));
	if (!array)
	{
		return (NULL);
	}
	i = 0;
	while (*arrays)
		array[i++] = ft_atoi(*(arrays++));
	return (array);
}

int	main(int argc, char **argv)
{
	char **temp;

	if (argc == 1)
		return (1);
	if (parsing(argc, argv) == 1)
	{
		ft_printf("Error\n");
		return (1);
	}
	if (argc == 2)
		temp = ft_split(argv[1], ' ');
	else
		temp = argv + 1;
	algo(make_list(temp, argc - 1), argc - 1);
	return (0);
}
