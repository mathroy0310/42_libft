/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:44:58 by maroy             #+#    #+#             */
/*   Updated: 2024/01/24 01:36:42 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts a lowercase character to uppercase.
 *
 * This function takes a lowercase character
 * as input and converts it to its corresponding uppercase character.
 *
 * @param c The character to be converted.
 * @return The uppercase character.
 */
t_u8	ft_toupper(t_u8 c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

/**
 * @brief Converts a string to uppercase.
 *
 * This function takes a string as input
 * and converts all lowercase characters
 * to their corresponding uppercase characters.
 *
 * @param str The string to be converted.
 * @return The converted string.
 */
char	*ft_str_toupper(char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
	return (str);
}
