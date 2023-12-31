/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   ft_append_strs.c                                  ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2020/12/10 12:25:16 by lduplain                                 */
/*   Updated: 2023/10/26 20:26:29 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#include "libft.h"

char	*ft_append_strs(char *s1, char *s2, t_bool free_s1, t_bool free_s2)
{
	char	*result;
	size_t	result_size;
	size_t	s1_length;

	result_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = ft_calloc(result_size, sizeof(char));
	if (!result)
		return (NULL);
	s1_length = ft_strcpy(s1, result);
	ft_strcpy(s2, &result[s1_length]);
	if (free_s1)
		free((void *)s1);
	if (free_s2)
		free((void *)s2);
	return (result);
}
