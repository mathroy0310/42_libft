/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fdnl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:21:48 by lduplain          #+#    #+#             */
/*   Updated: 2024/01/24 01:48:45 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes a string to a file descriptor followed by a newline character.
 *
 * @param fd The file descriptor to write to.
 * @param str The string to write.
 * @return The total number of characters written,
 *  including the newline character.
 */
size_t	ft_putstr_fdnl(int fd, char *str)
{
	size_t	len;

	len = ft_putstr_fd(fd, str);
	ft_putchar_fd(fd, '\n');
	return (len + 1);
}
