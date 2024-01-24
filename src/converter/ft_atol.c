/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:49:15 by maroy             #+#    #+#             */
/*   Updated: 2024/01/24 01:27:50 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts a string to a long integer.
 *
 * This function converts the given string to a long integer.
 * It skips leading whitespace characters
 * and handles optional sign characters. 
 * It stops conversion when a non-digit character is encountered.
 *
 * @param str The string to be converted.
 * @return The converted long integer value.
 */
long	ft_atol(const char *str)
{
	int		i;
	int		s;
	long	res;
	char	*cstr;

	if (!str)
		return (0);
	cstr = (char *)str;
	i = 0;
	s = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (cstr[i] == '-' || cstr[i] == '+')
	{
		if (cstr[i] == '-')
			s = -s;
		i++;
	}
	while (ft_isdigit(cstr[i]))
	{
		res = res * 10 + cstr[i] - '0';
		i++;
	}
	return (s * res);
}
