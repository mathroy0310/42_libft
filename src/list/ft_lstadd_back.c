/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/01/30 17:21:07 by maroy             #+#    #+#             */
/*   Updated: 2024/01/30 17:21:07 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/**
 * Adds a new element to the end of a linked list.
 *
 * @param lst The address of a pointer to the first element of the list.
 * @param new The element to add to the list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
