/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_charset.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:14:58 by maroy             #+#    #+#             */
/*   Updated: 2024/02/09 21:33:46 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_skip_charset(char *str, char *charset)
{
	if (str)
	{
		while (*charset)
		{
			while (*str == *charset)
				str++;
			charset++;
		}
	}
	return (str);
}
