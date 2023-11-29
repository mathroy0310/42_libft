/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_file_content.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 18:55:13 by lduplain          #+#    #+#             */
/*   Updated: 2023/11/28 23:16:29 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_create_file_content(char *path)
{
	ssize_t	file_lines_count;
	char	**file_content;
	size_t	line_index;

	(void)line_index;
	file_lines_count = ft_count_file_lines(path);
	if (file_lines_count == -1)
		return (NULL);
	file_content = ft_calloc((size_t)file_lines_count + 1, sizeof(char *));
	if (file_content == NULL)
		return (NULL);
	line_index = -1;
	while (++line_index < (size_t)file_lines_count)
		file_content[line_index] = NULL;
	file_content[line_index] = NULL;
	return (file_content);
}
