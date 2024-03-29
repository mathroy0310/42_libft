/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vect.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:24:18 by maroy             #+#    #+#             */
/*   Updated: 2024/02/12 15:01:39 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VECT_H
# define FT_VECT_H

/**
 * @brief Structure representing a 2D vector with unsigned integer components.
 */
typedef struct s_vect2u
{
	unsigned int	x;
	unsigned int	y;
}	t_vect2u;

/**
 * @brief Represents a 2D vector with x and y components.
 */
typedef struct s_vect2d
{
	double	x;
	double	y;
}	t_vect2d;

/**
 * @brief Represents a 3D vector with x, y, and z double components.
 */
typedef struct s_vect3d
{
	double	x;
	double	y;
	double	z;
}	t_vect3d;

/**
 * @brief Represents a 3D vector with x, y, and z unsinged interger components.
 */
typedef struct s_vect3u
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	z;
}	t_vect3u;

#endif // FT_VECT
