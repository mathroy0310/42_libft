/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:04:20 by lduplain          #+#    #+#             */
/*   Updated: 2023/10/26 22:36:05 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <errno.h>
#include <limits.h>

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
	if ((sign == 1 && result > (unsigned long long)(LLONG_MAX))
		|| (sign == -1 && result > (unsigned long long)(LLONG_MAX) + 1))
		errno = ERANGE;
	return ((long long)result * sign);
}
