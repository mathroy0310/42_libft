/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_str_arr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:10:51 by maroy             #+#    #+#             */
/*   Updated: 2023/11/28 23:33:43 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_destroy_str_arr(char ***string_array)
{
	size_t	index;

	if (*string_array != NULL)
	{
		index = 0;
		while ((*string_array)[index])
		{
			ft_free((*string_array)[index]);
			(*string_array)[index] = NULL;
			index++;
		}
		ft_free(*string_array);
		*string_array = NULL;
	}
	return (NULL);
}
