/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_file_exists.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:32:49 by maroy             #+#    #+#             */
/*   Updated: 2023/11/28 23:07:13 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_is_file_exists(char *file_path)
{
	t_file	*file;

	file = ft_open_file(file_path, O_RDONLY);
	if (!file)
		return (FALSE);
	ft_close_file(file);
	return (TRUE);
}
