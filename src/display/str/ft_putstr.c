/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:22:15 by lduplain          #+#    #+#             */
/*   Updated: 2024/01/24 01:47:19 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes a string to the standard output.
 *
 * @param str The string to be written.
 * @return The number of characters written.
 */
size_t	ft_putstr(char *str)
{
	return (ft_putstr_fd(1, str));
}
