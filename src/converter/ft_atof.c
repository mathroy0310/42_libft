/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:49:38 by maroy             #+#    #+#             */
/*   Updated: 2024/01/24 01:26:34 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static float	parse_fraction(const char *str, int *index)
{
	float	res;
	float	fraction;
	int		i;

	res = 0;
	fraction = 0.1;
	i = *index;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res += (str[i++] - '0') * fraction;
		fraction *= 0.1;
	}
	*index = i;
	return (res);
}

/**
 * @brief Converts a string representation of a floating-point
 * number to a float value.
 * 
 * This function takes a string `str` as input and converts it to a float value.
 * The string should represent a valid floating-point number.
 * Leading whitespace characters are ignored.
 * The function supports both positive and negative numbers.
 * The function also supports decimal
 * numbers, indicated by a decimal point '.' in the string.
 * The decimal part is parsed separately using the `parse_fraction` function.
 * 
 * @param str The string representation of the floating-point number.
 * @return The float value represented by the input string.
 */
float	ft_atof(const char *str)
{
	float	res;
	int		i;
	int		s;

	res = 0;
	i = 0;
	s = 1;
	if (!str)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - '0');
	if (str[i] == '.')
	{
		i++;
		res += parse_fraction(str, &i);
	}
	return (s * res);
}
