/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ull_ibase_length.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 13:05:34 by lduplain          #+#    #+#             */
/*   Updated: 2023/10/26 22:32:46 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_ull_ibase_length(unsigned long long number, int ibase)
{
	size_t	result;

	result = 0;
	while (number != 0)
	{
		number /= ibase;
		result++;
	}
	return (result);
}

size_t	ft_ull_length(unsigned long long number)
{
	return (ft_ull_ibase_length(number, 10));
}

size_t	ft_ll_length(long long number)
{
	if (number < 0)
		return (ft_ull_length((unsigned long long) - number) + 1);
	return (ft_ull_length((unsigned long long)number));
}

