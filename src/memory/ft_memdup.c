/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:47:15 by maroy             #+#    #+#             */
/*   Updated: 2023/12/05 14:50:06 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdup(const void *src, size_t size)
{
	void	*dest;

	dest = ft_malloc(size);
	ft_memcpy(dest, src, size);
	return (dest);
}
