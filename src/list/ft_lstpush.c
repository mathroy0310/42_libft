/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:27:15 by maroy             #+#    #+#             */
/*   Updated: 2024/01/30 17:30:48 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/**
 * Adds a new element to the end of a linked list.
 *
 * @param lst The address of a pointer to the first element of the list.
 * @param new The element to be added to the list.
 */
void ft_lstpush(t_list **lst, t_list *new)
{
	t_list *tmp;

	if (new == NULL)
		return;
	if (*lst == NULL)
	{
		*lst = new;
		return;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}
