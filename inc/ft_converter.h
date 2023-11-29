/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:16:50 by lduplain          #+#    #+#             */
/*   Updated: 2023/11/28 22:46:12 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONVERTER_H
# define FT_CONVERTER_H

# include "libft.h"
/* ************************************************************************** */
/* PATH : ./converter/ft_itoa.c */

/**
 *	@brief Converti une chaine de caractere en nombre entier
 *	@param str la chaine de caractere a convertir
 *	@return Retourne le nombre entier converti
 */
int			ft_atoi(char *str);
/* ************************************************************************** */
/*	PATH : ./converter/ft_natoi.c */

/**
 *	@brief Converti une chaine de caractere en nombre entier
 *	@param str la chaine de caractere a convertir
 *	@param n le nombre de caracteres a convertir
 *	@return Retourne le nombre entier converti
 */
int			ft_natoi(char *str, size_t n);
/* ************************************************************************** */
/* PATH : ./converter/ft_atoll.c */

/**
 * @brief Converti une chaine de caractere en nombre entier `long long`
 * @param str la chaine de caractere a convertir
 * @return Retourne le nombre entier `long long` converti
 */
long long	ft_atoll(char *str);
/* ************************************************************************** */
/* PATH : ./converter/ft_ulltoa_ibase.c */

/**
 * @brief Converti un nombre entier `unsigned long long` en chaine de caractere
 * @param number le nombre entier `unsigned long long` a convertir
 * @param ibase la base de conversion
 * @param uppercase si `TRUE` la chaine de caractere sera en majuscule
 * @return Retourne la chaine de caractere convertie
 */
char		*ft_ulltoa_ibase(unsigned long long number, int ibase,
				t_bool uppercase);
/* ************************************************************************** */
/* PATH : ./converter/ft_lltoa_ibase.c */

/**
 * @brief Converti un nombre entier `long long` en chaine de caractere
 * @param number le nombre entier `long long` a convertir
 * @param ibase la base de conversion
 * @param uppercase si `TRUE` la chaine de caractere sera en majuscule
 * @return Retourne la chaine de caractere convertie
 */
char		*ft_lltoa_ibase(long long number, int ibase, t_bool uppercase);
/* ************************************************************************** */
/* PATH : ./converter/ft_atof.c */

/**
 * @brief Converti une chaine de caractere en nombre a virgule flottante
 * @param str la chaine de caractere a convertir
 * @return Retourne le nombre a virgule flottante converti
 */
float		ft_atof(const char *str);
/* ************************************************************************** */
/* PATH : ./converter/ft_atol.c */

/**
 * @brief Converti une chaine de caractere en nombre entier `long`
 * @param str la chaine de caractere a convertir
 * @return Retourne le nombre entier `long` converti
 */
long		ft_atol(const char *str);
/* ************************************************************************** */

#endif // FT_CONVERTER_H
