/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:14:27 by maroy             #+#    #+#             */
/*   Updated: 2024/01/24 01:36:49 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is a punctuation character.
 *
 * A punctuation character is any character that is printable, but is neither
 * alphanumeric nor whitespace.
 *
 * @param c The character to be checked.
 * @return 1 if the character is a punctuation character, 0 otherwise.
 */
t_u8	ft_ispunct(t_u8 c)
{
	return (ft_isprint(c) && !ft_isalnum(c) && !ft_isspace(c));
}
