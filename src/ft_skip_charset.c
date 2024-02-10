/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_charset.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:14:58 by maroy             #+#    #+#             */
/*   Updated: 2024/02/09 21:56:19 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_skip_charset(char *str, const char *charset)
{
	if (str && charset)
	{
		while (*str && ft_strchr(charset, *str))
			str++;
	}
	return (str);
}
