/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:04:20 by lduplain          #+#    #+#             */
/*   Updated: 2024/01/24 01:39:43 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <errno.h>
#include <limits.h>

/**
 * @brief Converts a string to a long long integer.
 *
 * This function takes a string as input
 * and converts it to a long long integer.
 * It skips leading whitespace characters,
 * handles sign (+/-) and converts the
 * numeric characters to the corresponding integer
 * value. If the resulting value
 * exceeds the range of a long long integer, it sets the errno to ERANGE.
 *
 * @param str The string to be converted.
 * @return The converted long long integer value.
 */
long long	ft_atoll(char *str)
{
	unsigned long long	result;
	size_t				i;
	int					sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] && ft_isspace(str[i]))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if ((sign == 1 && result > (unsigned long long)(LLONG_MAX)) || (sign == -1
			&& result > (unsigned long long)(LLONG_MAX) + 1))
		errno = ERANGE;
	return ((long long)result * sign);
}
