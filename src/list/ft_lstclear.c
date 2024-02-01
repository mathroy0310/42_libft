/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:27:53 by maroy             #+#    #+#             */
/*   Updated: 2024/02/01 15:07:06 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/**
 * @brief Clears a linked list and frees the memory occupied by its elements.
 *
 * This function iterates through the linked list pointed to by `lst`
 * and calls the `del` function on each element to free its memory.
 * It also sets the `lst` pointer to NULL, indicating an empty list.
 *
 * @param lst Pointer to a pointer to the first node of the linked list.
 * @param del Pointer to the function used to delete the content of a node.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;
	t_list	*next;

	if (!lst)
		return ;
	cur = *lst;
	while (cur)
	{
		next = cur->next;
		ft_lstdelone(cur, del);
		cur = next;
	}
	*lst = NULL;
}
