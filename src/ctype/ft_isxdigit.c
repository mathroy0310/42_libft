/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:11:14 by maroy             #+#    #+#             */
/*   Updated: 2024/01/24 01:34:39 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character is a hexadecimal digit.
 *
 * This function checks if the given character is a hexadecimal digit,
 * which includes digits from 0 to 9, and letters from 'a' to 'f' (lowercase)
 * or 'A' to 'F' (uppercase).
 *
 * @param c The character to be checked.
 * @return 1 if the character is a hexadecimal digit, 0 otherwise.
 */
t_u8	ft_isxdigit(t_u8 c)
{
	return (ft_isdigit(c) || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'));
}
