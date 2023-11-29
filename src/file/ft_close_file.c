/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:06:45 by maroy             #+#    #+#             */
/*   Updated: 2023/11/28 22:50:53 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_close_file(t_file *file)
{
	if (close(file->c_fd) == 1)
		return (FALSE);
	file->c_fd = 0;
	ft_free(file->c_file_path);
	ft_free(file->p_backup);
	ft_free(file->readed_line);
	ft_free(file);
	return (TRUE);
}
