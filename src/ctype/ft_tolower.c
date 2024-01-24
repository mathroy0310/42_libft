/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:25:12 by maroy             #+#    #+#             */
/*   Updated: 2024/01/24 01:35:45 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts an uppercase character to lowercase.
 *

 * This function takes an unsigned 8-bit character
 * as input and checks if it is an uppercase character.
 * If it is, the function converts it to lowercase
 * by adding 32 to its ASCII value.
 *
 * @param c The character to be converted.

 * @return The lowercase version of the character
		if it is an uppercase character, otherwise the same character.
 */
t_u8	ft_tolower(t_u8 c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

/**
 * @brief Converts a string to lowercase.
 *

 * This function takes a null-terminated string
 * as input and converts all the characters in the string to lowercase
 * using the ft_tolower() function. If the input string is NULL,
	the function returns NULL.
 *
 * @param str The string to be converted.
 * @return The converted string.
 */
char	*ft_str_tolower(char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		*str = ft_tolower(*str);
		str++;
	}
	return (str);
}
