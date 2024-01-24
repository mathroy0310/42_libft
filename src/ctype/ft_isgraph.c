/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:15:34 by maroy             #+#    #+#             */
/*   Updated: 2024/01/24 01:33:47 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character is a printable character other than a space.
 *

 * This function checks if the given
 * character is a printable character other than a space.
 * A printable character is any character that can be displayed on the screen.

 * This function returns 1 if the character is a printable
 * character other than a space, and 0 otherwise.
 *
 * @param c The character to be checked.
 * @return 1 if the character is a printable character other than a space,
	0 otherwise.
 */
t_u8	ft_isgraph(t_u8 c)
{
	return (ft_isprint(c) && !ft_isspace(c));
}
