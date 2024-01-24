/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:30:17 by maroy             #+#    #+#             */
/*   Updated: 2024/01/24 01:31:45 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character is an alphabetic character.
 *
 * This function checks if the given character is an alphabetic character,
 * either lowercase or uppercase.
 *
 * @param c The character to be checked.
 * @return 1 if the character is an alphabetic character, 0 otherwise.
 */
t_u8	ft_isalpha(t_u8 c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

/**
 * @brief Checks if a string contains only alphabetic characters.
 *
 * This function checks if the given 
 * string contains only alphabetic characters,
 * either lowercase or uppercase.
 *
 * @param str The string to be checked.
 * @return 1 if the string contains only alphabetic characters, 0 otherwise.
 */
t_u8	ft_str_isalpha(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!ft_isalpha(str[i]))
			return (0);
	}
	return (1);
}
