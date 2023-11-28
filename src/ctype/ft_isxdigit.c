/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:11:14 by maroy             #+#    #+#             */
/*   Updated: 2023/11/28 13:50:06 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_u8	ft_isxdigit(t_u8 c)
{
	return (ft_isdigit(c) || (c >= 'a' && c <= 'f')
		|| (c >= 'A' && c <= 'F'));
}
