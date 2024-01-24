/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_nl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:22:02 by lduplain          #+#    #+#             */
/*   Updated: 2024/01/24 01:47:10 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes a string to the standard output followed by a newline character.
 *
 * @param str The string to be written.
 * @return The number of characters written, or -1 if an error occurred.
 */
size_t	ft_putstr_nl(char *str)
{
	return (ft_putstr_fdnl(1, str));
}
