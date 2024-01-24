/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_natoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:01:27 by lduplain          #+#    #+#             */
/*   Updated: 2024/01/24 01:29:29 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts a portion of a string to an integer.
 *
 * This function takes a string `str` and a size `n` as input and converts
 * the portion of the string up to `n` characters into an integer.
 * The function skips leading whitespace characters,
 * handles negative numbers, and stops
 * conversion when encountering a non-digit character.
 *
 * @param str The string to convert.
 * @param n The maximum number of characters to convert.
 * @return The converted integer value.
 */
int	ft_natoi(char *str, size_t n)
{
	unsigned int	result;
	size_t			i;
	int				is_negative;

	i = 0;
	result = 0;
	is_negative = 1;
	while (str[i] && ft_isspace(str[i]) && i < n)
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+') && i < n)
	{
		if (str[i] == '-')
			is_negative *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9' && i < n)
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return ((int)result * is_negative);
}
