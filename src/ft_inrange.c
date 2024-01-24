/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inrange.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:31:09 by maroy             #+#    #+#             */
/*   Updated: 2024/01/24 01:49:38 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if a given number is within a specified range.
 *
 * @param n The number to check.
 * @param low The lower bound of the range (inclusive).
 * @param high The upper bound of the range (exclusive).
 * @return 1 if the number is within the range, 0 otherwise.
 */
int	ft_inrange(int n, int low, int high)
{
	return (low <= n && n < high);
}
