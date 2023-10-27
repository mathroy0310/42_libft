/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   ft_floor.c                                        ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2023/08/01 15:20:40 by maroy                                    */
/*   Updated: 2023/10/26 19:54:04 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#include "libft.h"

double	ft_floor(double x)
{
	return ((double)((int)x));
}

float	ft_floorf(float x)
{
	return ((float)((int)x));
}

long double	ft_floorl(long double x)
{
	return ((long double)((int)x));
}
