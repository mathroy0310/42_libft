/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:30:29 by maroy             #+#    #+#             */
/*   Updated: 2024/01/24 01:33:17 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character is a printable character.
 *
 * This function checks if the given character is a printable character,
 * which includes all characters
 * from space (32) to tilde (126) in the ASCII table.
 *
 * @param c The character to be checked.
 * @return 1 if the character is a printable character, 0 otherwise.
 */
t_u8	ft_isprint(t_u8 c)
{
	return ((c < 127) && (c >= 32));
}
