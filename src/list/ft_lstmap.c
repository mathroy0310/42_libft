/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:34:38 by maroy             #+#    #+#             */
/*   Updated: 2024/02/01 15:04:10 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/**
 * @brief Applies the function `f` to each element of the linked list
 * `lst` and creates a new list
 * with the results. The `del` function is used to delete
 * the content of any new node that fails to be created.
 *
 *
 * @param lst The pointer to the first node of the linked list.
 * @param f The function to apply to each element of the linked list.
 * @param del The function used to delete the content
 * of any new node that fails to be created.
 * @return The pointer to the first node of the new list,
 *  or NULL if `lst`, `f`, or `del` is NULL.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*rtn;

	rtn = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
			ft_lstclear(&temp, del);
		ft_lstadd_back(&rtn, temp);
		lst = lst->next;
	}
	return (rtn);
}
