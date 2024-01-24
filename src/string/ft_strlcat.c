/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:37:09 by maroy             #+#    #+#             */
/*   Updated: 2024/01/24 01:29:46 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Concatenates the string pointed to by `src` to the end of the string
 * pointed to by `dst`. The total length of the resulting string is limited
 * to `size` characters, including the null-terminating character.
 *
 * @param dst   The destination string.
 * @param src   The source string.
 * @param size  The size of the destination buffer.
 * @return      The total length of the string that would have been created
 *              if enough space had been available,
 *				excluding the null-terminating
 *character. If the return value is greater than or equal to `size`,
 *              it indicates truncation occurred.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	return_size;

	return_size = 0;
	while (*dst && return_size < size)
	{
		dst++;
		return_size++;
	}
	if (return_size >= size)
		return (return_size + ft_strlen(src));
	while (*src && return_size + 1 < size)
	{
		*dst = *src;
		dst++;
		src++;
		return_size++;
	}
	*dst = '\0';
	return (return_size + ft_strlen(src));
}
