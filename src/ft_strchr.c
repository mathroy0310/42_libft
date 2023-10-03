/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:41:06 by maroy             #+#    #+#             */
/*   Updated: 2023/10/03 19:55:37 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*s;
	size_t	i;

	s = (char *)str;
	i = 0;
	while (i <= ft_strlen(str))
	{
		if (s[i] == (char)c)
			return (s + i);
		i++;
	}
	return (0);
}