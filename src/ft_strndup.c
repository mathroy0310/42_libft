/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   ft_strndup.c                                      ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2020/12/09 16:51:08 by lduplain                                 */
/*   Updated: 2023/10/26 20:52:47 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n, t_bool free_str)
{
	size_t	index;
	char	*result;

	if (!str)
		return (NULL);
	result = ft_calloc(n + 1, sizeof(char));
	if (result == NULL)
		return (NULL);
	index = 0;
	while (str[index] && index < n)
	{
		result[index] = str[index];
		index++;
	}
	while (index <= n)
	{
		result[index] = 0;
		index++;
	}
	if (free_str)
		free((char *)str);
	return (result);
}
