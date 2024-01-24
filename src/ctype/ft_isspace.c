/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:08:21 by maroy             #+#    #+#             */
/*   Updated: 2024/01/24 01:34:34 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is a whitespace character.
 *
 * This function checks if the character is a space (' '), tab ('\t'),
	newline ('\n'),
 * vertical tab ('\v'), form feed ('\f'), or carriage return ('\r').
 *
 * @param c The character to be checked.
 * @return 1 if the character is a whitespace character, 0 otherwise.
 */
t_u8	ft_isspace(t_u8 c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r');
}
