/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2022/10/25 14:00:17 by marvin            #+#    #+#             */
/*   Updated: 2022/10/25 14:00:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"


/**
 * @brief Returns the last element of a linked list.
 *
 * @param lst The head of the linked list.
 * @return The last element of the linked list, or NULL if the list is empty.
 */
t_list	*ft_lstlast(t_list *lst)
{
	t_list *cur;

	if (!lst)
		return (NULL);
	cur = lst;
	while (cur->next != NULL)
	{
		cur = cur->next;
	}
	return (cur);
}
