/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_containts_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:25:53 by lduplain          #+#    #+#             */
/*   Updated: 2023/11/28 23:23:55 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_contains_char(char *str, char c)
{
	if (ft_find_char(str, c) == -1)
		return (FALSE);
	return (TRUE);
}
