/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:13:45 by jsantini          #+#    #+#             */
/*   Updated: 2025/11/10 14:22:39 by jsantini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!*lst || !lst)
		return ;
	while ((*lst)->next != NULL)
	{
		temp = *lst;
		del((*lst)->content);
		*lst = (*lst)->next;
		free(temp);
	}
	del((*lst)->content);
	free(*lst);
	*lst = NULL;
}
