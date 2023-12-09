/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:39:55 by maroy             #+#    #+#             */
/*   Updated: 2023/12/08 21:33:58 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_u8	ft_isalnum(t_u8 c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

t_u8	ft_str_isalnum(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!ft_isalnum(str[i]))
			return (0);
	}
	return (1);
}