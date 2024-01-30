/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:16:53 by maroy             #+#    #+#             */
/*   Updated: 2024/01/30 17:32:44 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/**
 * @brief Deletes a single node from a linked list.
 *
 * This function deletes a single node from a linked list. 
 * It calls the provided 'del' function to free the memory
 * occupied by the content of the node, and
 * then frees the node itself. After deletion, the 'lst' pointer is set to NULL.
 *
 * @param lst The node to be deleted.
 * @param del The function used to free the memory
 *  occupied by the content of the node.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
}
