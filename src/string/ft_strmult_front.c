/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   ft_strmult_front.c                                ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2020/12/17 11:07:51 by lduplain                                 */
/*   Updated: 2023/10/26 20:26:06 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmult_front(char *to_mult, char *back, size_t n, t_bool free_back)
{
	char	*result;
	size_t	counter;

	if (n <= 0)
		return (NULL);
	result = ft_append_strs(to_mult, back, FALSE, free_back);
	counter = 1;
	while (counter < n)
	{
		result = ft_append_strs(to_mult, result, FALSE, TRUE);
		counter++;
	}
	return (result);
}
