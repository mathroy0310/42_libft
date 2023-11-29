/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_file_content.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 20:23:55 by lduplain          #+#    #+#             */
/*   Updated: 2023/11/28 22:50:58 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_fill_file_content(char **file_content, t_file *file)
{
	size_t	line_index;
	char	*duplicated_line;

	line_index = 0;
	while (ft_read_next_line(file))
	{
		duplicated_line = ft_strdup(file->readed_line);
		if (duplicated_line == NULL)
			return (NULL);
		file_content[line_index] = duplicated_line;
		line_index++;
	}
	duplicated_line = ft_strdup(file->readed_line);
	if (duplicated_line == NULL)
		return (NULL);
	file_content[line_index] = duplicated_line;
	return (file_content);
}
