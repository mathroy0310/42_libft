/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:00:59 by lduplain          #+#    #+#             */
/*   Updated: 2024/01/24 01:46:38 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes a string to the specified file descriptor.
 *
 * @param fd The file descriptor to write to.
 * @param str The string to write.
 * @return The number of characters written.
 */
size_t	ft_putstr_fd(int fd, char *str)
{
	size_t	len;

	len = ft_strlen(str);
	write(fd, str, len);
	return (len);
}
