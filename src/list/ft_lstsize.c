/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:52:20 by maroy             #+#    #+#             */
/*   Updated: 2024/01/30 17:30:41 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/**
 * @brief Calculates the size of a linked list.
 * 
 * This function counts the number of elements in a linked list.
 * 
 * @param lst The pointer to the head of the linked list.
 * @return The number of elements in the linked list.
 */
int ft_lstsize(t_list *lst)
{
	int count;

	count = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
