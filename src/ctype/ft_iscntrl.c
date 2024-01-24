/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:17:07 by maroy             #+#    #+#             */
/*   Updated: 2024/01/24 01:37:01 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character is a control character.
 *
 * This function checks if the given character is a control character, which
 * includes characters with ASCII values between 0 and 31, as well as the
 * character with ASCII value 127.
 *
 * @param c The character to be checked.
 * @return 1 if the character is a control character, 0 otherwise.
 */
t_u8	ft_iscntrl(t_u8 c)
{
	return ((c > 0 && c <= 31) || c == 127);
}
