/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 09:24:56 by jsantini          #+#    #+#             */
/*   Updated: 2025/11/28 09:33:13 by jsantini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

static int	go_through_one(char *str)
{
	char	**strs;
	int	i;
	int	j;

	strs = ft_split(str, ' ');
	i = 0;
	if (!*strs)
		return (1);
	while (strs[i])
	{
		j = 0;
		while (ft_isdigit(strs[i][j]) == 1)
				j++;
		if (strs[i][j] != '\0')
			return (1);
		i++;
	}
	return (0);
}

int	parsing(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 1)
		return (1);
	if (ac == 2)
		return (go_through_one(av[1]));
	i = 0;
	if (ac >= 3)
	{
		while (++i < ac)
		{
			j = 0;
			while (ft_isdigit(av[i][j]) == 1)
				j++;
			if (av[i][j] != '\0')
				return (1);
		}

	}
	return (0);
}
