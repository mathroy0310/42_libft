/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:39:55 by maroy             #+#    #+#             */
/*   Updated: 2024/01/24 01:31:00 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is alphanumeric.
 *
 * This function checks if the given
 * character is either an alphabetic character or a digit.
 *
 * @param c The character to be checked.
 * @return 1 if the character is alphanumeric, 0 otherwise.
 */
t_u8	ft_isalnum(t_u8 c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/**
 * @brief Checks if the given string consists only of alphanumeric characters.
 *
 * This function iterates through the given
 * string and checks if each character is alphanumeric.
 *
 * @param str The string to be checked.
 * @return 1 if the string consists only of alphanumeric characters,
	0 otherwise.
 */
t_u8	ft_str_isalnum(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!ft_isalnum(str[i]))
			return (0);
	}
	return (1);
}
