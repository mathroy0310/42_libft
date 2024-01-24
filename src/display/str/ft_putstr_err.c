/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_err.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:10:24 by lduplain          #+#    #+#             */
/*   Updated: 2024/01/24 01:48:11 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes a string to the standard error output.
 *
 * This function writes the string pointed to by `str`
 * to the standard error output.
 * It is equivalent to calling `ft_putstr_fd(2, str)`.
 *
 * @param str The string to be written.
 * @return The number of characters written, or -1 if an error occurred.
 */
size_t	ft_putstr_err(char *str)
{
	return (ft_putstr_fd(2, str));
}
