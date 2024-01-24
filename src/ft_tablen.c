/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:45:50 by maroy             #+#    #+#             */
/*   Updated: 2024/01/24 01:49:28 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Calculates the length of a null-terminated array of strings.
 *
 * @param env The null-terminated array of strings.
 * @return The length of the array.
 */
int	ft_tablen(char **env)
{
	int	len;

	len = 0;
	while (env[len])
		len++;
	return (len);
}
