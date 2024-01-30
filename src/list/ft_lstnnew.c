/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:23:48 by maroy             #+#    #+#             */
/*   Updated: 2024/01/30 17:30:34 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft_memory.h"

/**
 * Creates a new list element with the specified content and content size.
 * 
 * @param content The content to be stored in the list element.
 * @param content_size The size of the content.
 * @return A pointer to the newly created list element, or NULL if memory allocation fails.
 */
t_list	*ft_lstnnew(void const *content, size_t content_size)
{
	t_list *elem;

	if (!(elem = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		elem->content = NULL;
		elem->content_size = 0;
	}
	else
	{
		elem->content_size = content_size;
		if (!(elem->content = malloc(content_size)))
		{
			free(elem);
			return (NULL);
		}
		ft_memcpy(elem->content, content, content_size);
	}
	elem->next = NULL;
	return (elem);
}