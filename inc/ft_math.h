/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:05:40 by maroy             #+#    #+#             */
/*   Updated: 2023/11/28 22:41:53 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# define FT_PI 3.14159265358979323846

/**
 * @brief Get the minimum of two `int` values.
 *
 * Compare 2 integer values `a` and `b` and return the smaller of the two.
 *
 * @param a The first integer value to compare.
 * @param b The second integer value to compare.
 * @return The minimum of `a` and `b`.
 */
int				ft_min(int a, int b);

/**
 * @brief Get the minimum of two `float` values.
 *

	* Compare 2 floating-point values `a` and `b` and return the smaller of the two.
 *
 * @param a The first floating-point value to compare.
 * @param b The second floating-point value to compare.
 * @return The minimum of `a` and `b`.
 */
float			ft_fmin(float a, float b);

/**
 * @brief Get the maximum of two `int` values.
 *
 * Compare 2 integer values `a` and `b` and return the larger of the two.
 *
 * @param a The first integer value to compare.
 * @param b The second integer value to compare.
 * @return The maximum of `a` and `b`.
 */
int				ft_max(int a, int b);

/**
 * @brief Get the maximum of two `float` values.
 *
 * Compare 2 floating-point values `a` and `b` and return the larger of the two.
 *
 * @param a The first floating-point value to compare.
 * @param b The second floating-point value to compare.
 * @return The maximum of `a` and `b`.
 */
float			ft_fmax(float a, float b);

/**
 * @brief Calculate the absolute value of the `int` argument j.
 * @param j the number to get the absolute value
 * @return This functions return the absolute of j
 */
int				ft_abs(int j);

/**
 * @brief Calculate the absolute value of the `long int` argument j.
 * @param j the number to get the absolute value
 * @return This functions return the absolute of j
 */
long int		ft_labs(long int j);

/**
 * @brief Calculate the absolute value of the `long long int` argument j.
 * @param j the number to get the absolute value
 * @return This functions return the absolute of j
 */
long long int	ft_llabs(long long int j);

/**
 * @brief Get the smallest integral value that is not less than x.
 * @param x The input `double` number for which to calculate the ceiling.
 * @return The ceiling of x.
 */
double			ft_ceil(double x);

/**
 * @brief Get the smallest integral value that is not less than x.
 * @param x The input `float` number for which to calculate the ceiling.
 * @return The ceiling of x.
 */
float			ft_ceilf(float x);

/**
 * @brief Get the smallest integral value that is not less than x.
 * @param x The input `long double` number for which to calculate the ceiling.
 * @return The ceiling of x.
 */
long double		ft_ceill(long double x);

/**
 * @brief Get the largest `int` value that is not greater than x.
 * @param x the number to get the floor
 * @return The floor of x
 */
double			ft_floor(double x);

/**
 * @brief Get the largest `float` value that is not greater than x.
 * @param x the number to get the floor
 * @return The floor of x
 */
float			ft_floorf(float x);
/**
 * @brief Get the largest `long double` value that is not greater than x.
 * @param x the number to get the floor
 * @return The floor of x
 */
long double		ft_floorl(long double x);

/**
 * @brief The pow() function returns the value of x raised to the power of y.
 * @param x The base value of the power function.
 * @param y The exponent value of the power function.
 * @return On success, these functions return the value of x to the power of y.
 */
double			ft_pow(double x, double y);

/**
 * @brief The sqrt() function returns the nonnegative square root of x.
 *
 * @param x The input `double` number for which to calculate the square root.
 * @return On success, this function returns the square root of x.
 */
double			ft_sqrt(double x);

/**
 * @brief The sqrt() function returns the nonnegative square root of x.
 *
 * @param x The input `double` number for which to calculate the square root.
 * @return On success, this function returns the square root of x.
 */
float			ft_sqrtf(float x);

/**
 * @brief The sqrt() function returns the nonnegative square root of x.
 *
 * @param x The input `double` number for which to calculate the square root.
 * @return On success, this function returns the square root of x.
 */
long double		ft_sqrtl(long double x);

/*
**	Get the absolute value of int a converted to unsigned int.
**	./math/ft_iabsui.c
*/
unsigned int	ft_iabsui(int a);

#endif // FT_MATH_H 