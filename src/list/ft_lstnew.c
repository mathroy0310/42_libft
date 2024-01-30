/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2022/11/09 14:26:07 by maroy             #+#    #+#             */
/*   Updated: 2022/11/09 14:33:53 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/**
 * @brief Creates a new list node with the given content.
 *
 * @param content The content to be stored in the new node.
 * @return A pointer to the newly created list node.
 */
t_list *ft_lstnew(void *content)
{
	t_list *dst;

	dst = malloc(sizeof(t_list));
	if (!dst)
		return (NULL);
	dst->content = content;
	dst->next = NULL;
	return (dst);
}
