/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_natoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:01:27 by lduplain          #+#    #+#             */
/*   Updated: 2023/10/26 22:36:16 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
