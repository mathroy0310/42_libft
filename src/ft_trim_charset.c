/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim_charset.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:04:05 by maroy             #+#    #+#             */
/*   Updated: 2024/02/09 22:05:26 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_trim_charset(char *str, const char *charset)
{
	int	str_len;
	int	charset_len;

	if (str && charset)
	{
		str_len = ft_strlen(str);
		charset_len = ft_strlen(charset);
		while (str_len > 0 && ft_strchr(charset, str[str_len - 1]))
			str_len--;
		str[str_len] = '\0';
	}
	return (str);
}
