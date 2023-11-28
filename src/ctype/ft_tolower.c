/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:25:12 by maroy             #+#    #+#             */
/*   Updated: 2023/11/28 13:50:14 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_u8	ft_tolower(t_u8 c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

char *ft_str_tolower(char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		*str = ft_tolower(*str);
		str++;
	}
	return (str);
}