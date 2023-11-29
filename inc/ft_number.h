/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 12:20:58 by lduplain          #+#    #+#             */
/*   Updated: 2023/11/28 22:40:22 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NUMBER_H
# define FT_NUMBER_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Get the unsigned long long number length in base ibase.
**	It means the number of digits in number.
**	./number/ft_ull_ibase_length.c
*/
size_t	ft_ull_ibase_length(unsigned long long number, int ibase);

/*
**	Get the unsigned long long number length in base 10.
**	It means the number of digits in number.
**	./number/ft_ull_length.c
*/
size_t	ft_ull_length(unsigned long long number);

/*
**	Get the long long number length.
**	It means the number of digits in number.
**	./number/ft_ll_length.c
*/
size_t	ft_ll_length(long long number);

#endif // FT_NUMBER_H
