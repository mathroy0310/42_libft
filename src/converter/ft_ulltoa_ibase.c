/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_ibase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 10:41:12 by lduplain          #+#    #+#             */
/*   Updated: 2024/01/24 01:41:15 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*fill_result(unsigned long long nbr, int ibase, char *result, int len)
{
	while (nbr != 0)
	{
		if ((nbr % ibase) < 10)
			result[len - 1] = (nbr % ibase) + 48;
		else
			result[len - 1] = (nbr % ibase) + 87;
		nbr /= ibase;
		len--;
	}
	return (result);
}

/**

 * Converts an unsigned long long number to a string 
 * representation in the specified base.
 *
 * @param number The number to be converted.
 * @param ibase The base to convert the number to.

 * @param uppercase Flag indicating whether the resulting string
 * should be in uppercase.
 * @return A dynamically allocated string representing the converted number,
	or NULL if memory allocation fails.
 */
char	*ft_ulltoa_ibase(unsigned long long number, int ibase, t_bool uppercase)
{
	char	*result;
	int		length;

	result = 0;
	length = 0;
	if (number == 0)
		return (ft_strdup("0"));
	length = ft_ull_ibase_length(number, ibase);
	result = malloc(sizeof(char) * (length + 1));
	if (!result)
		return (0);
	result[length] = '\0';
	result = fill_result(number, ibase, result, length);
	if (uppercase)
		result = ft_str_toupper(result);
	return (result);
}
