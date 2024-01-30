/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2022/10/25 13:57:32 by marvin            #+#    #+#             */
/*   Updated: 2022/10/25 13:57:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/**
 * Adds a new element to the front of a linked list.
 *
 * @param lst The address of a pointer to the first element of the list.
 * @param new The element to be added to the front of the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst && !new)
		return ;
	new->next = *lst;
	*lst = new;
}
