/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:44:58 by maroy             #+#    #+#             */
/*   Updated: 2023/11/28 22:53:18 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_u8	ft_toupper(t_u8 c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

char	*ft_str_toupper(char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
	return (str);
}
