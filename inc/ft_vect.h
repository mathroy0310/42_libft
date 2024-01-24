/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vect.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:24:18 by maroy             #+#    #+#             */
/*   Updated: 2024/01/23 19:25:26 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VECT_H
#define FT_VECT_H

typedef struct s_vect2u
{
	unsigned int x;
	unsigned int y;
} t_vect2u;

typedef struct s_vect2d
{
	double x;
	double y;
} t_vect2d;

typedef struct s_vect3d
{
	double x;
	double y;
	double z;
} t_vect3d;

#endif