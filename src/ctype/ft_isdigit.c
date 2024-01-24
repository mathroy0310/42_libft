/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:35:52 by maroy             #+#    #+#             */
/*   Updated: 2024/01/24 01:37:19 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character is a digit.
 *
 * This function checks if the given character is a digit (0-9).
 *
 * @param c The character to be checked.
 * @return 1 if the character is a digit, 0 otherwise.
 */
t_u8	ft_isdigit(t_u8 c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/**
 * @brief Checks if a string contains only digits.
 *
 * This function checks if the given string contains only digits (0-9).
 *
 * @param str The string to be checked.
 * @return 1 if the string contains only digits, 0 otherwise.
 */
t_u8	ft_str_isdigit(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
	}
	return (1);
}
