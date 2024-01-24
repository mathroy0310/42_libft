/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_errnl.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:13:40 by lduplain          #+#    #+#             */
/*   Updated: 2024/01/24 01:48:53 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes a string to the standard error
 * output followed by a newline character.
 *
 * @param str The string to be written.
 * @return The number of characters written, or -1 if an error occurred.
 */
size_t	ft_putstr_errnl(char *str)
{
	return (ft_putstr_fdnl(2, str));
}
