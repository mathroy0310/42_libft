/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:48:28 by maroy             #+#    #+#             */
/*   Updated: 2024/01/24 01:32:14 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character is a valid ASCII character.
 *
 * This function checks if the given
 * character is within the ASCII range (0-127).
 *
 * @param c The character to be checked.
 * @return 1 if the character is a valid ASCII character, 0 otherwise.
 */
t_u8	ft_isascii(t_u8 c)
{
	return (c <= 127);
}
