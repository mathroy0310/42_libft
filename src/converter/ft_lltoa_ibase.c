/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_ibase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 10:40:15 by lduplain          #+#    #+#             */
/*   Updated: 2024/01/24 01:40:05 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts a long long number to a string representation in the specified base.
 *
 * @param number The long long number to convert.
 * @param base The base to use for the conversion.

 * @param uppercase A boolean value indicating whether to use
 * uppercase letters for hexadecimal bases.
 * @return The string representation of the converted number.
 */
char	*ft_lltoa_ibase(long long number, int base, t_bool uppercase)
{
	char	*result;

	result = ft_ulltoa_ibase((unsigned long long)number, base, uppercase);
	if (number >= 0)
		return (result);
	return (ft_append_strs("-", result, FALSE, TRUE));
}
