/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:41:01 by maroy             #+#    #+#             */
/*   Updated: 2023/10/26 22:29:31 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcpy(const char *source, char *destination)
{
	size_t	source_length;
	size_t	index;

	if (!destination || !source)
		return (0);
	source_length = ft_strlen(source);
	index = 0;
	while (index < source_length)
	{
		destination[index] = source[index];
		index++;
	}
	destination[index] = 0;
	return (source_length);
}