/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:01:07 by lduplain          #+#    #+#             */
/*   Updated: 2024/01/24 01:27:53 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <errno.h>
#include <limits.h>

/**
 * @brief Converts a string to an integer.
 *
 * This function takes a string as input and converts it to an integer.
 * It skips leading whitespace characters, handles sign (+/-) and
 * converts the remaining digits to an integer value.
 * If the resulting integer is out of the range of `int`, it sets `errno`
 * to `ERANGE`.
 *
 * @param str The string to be converted.
 * @return The converted integer value.
 */
int	ft_atoi(char *str)
{
	unsigned int	result;
	size_t			i;
	int				sign;

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
	if ((sign == 1 && result > (unsigned int)(INT_MAX)) || (sign == -1
			&& result > (unsigned int)(INT_MAX) + 1))
		errno = ERANGE;
	return ((int)result * sign);
}
