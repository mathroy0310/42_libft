/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ceil.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:06:05 by maroy             #+#    #+#             */
/*   Updated: 2023/11/28 22:51:39 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_ceil(double x)
{
	double	i;
	double	f;

	i = x;
	f = x - i;
	if (f > 0)
		return (i + 1);
	return (i);
}

float	ft_ceilf(float x)
{
	float	i;
	float	f;

	i = x;
	f = x - i;
	if (f > 0)
		return (i + 1);
	return (i);
}

long double	ft_ceill(long double x)
{
	long double	i;
	long double	f;

	i = x;
	f = x - i;
	if (f > 0)
		return (i + 1);
	return (i);
}
