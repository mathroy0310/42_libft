/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:00:26 by maroy             #+#    #+#             */
/*   Updated: 2023/12/08 21:35:18 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
# define FT_CTYPE_H

# include "ft_stdint.h"

/* ************************************************************************** */
/* PATH : ./ctype/ft_isalnum.c */

/**
 * @brief Check si le caractere est un chiffre ou une lettre
 *
 * @param c le caractere a tester
 * @return 1 si le caractere est un chiffre ou une lettre, 0 sinon
 */
t_u8	ft_isalnum(t_u8 c);

/**
 * @brief Check si la chaine de caractere est composee de chiffres ou de lettres
 *
 * @param str la chaine de caractere a tester
 * @return 1 si la chaine de caractere est composee de chiffres ou de lettres, 0 sinon
 */
t_u8   ft_str_isalnum(char *str);
/* ************************************************************************** */
/* PATH : ./ctype/ft_isalpha.c */

/**
 * @brief Check si le caractere est une lettre
 *
 * @param c le caractere a tester
 * @return 1 si le caractere est une lettre, 0 sinon
 */
t_u8	ft_isalpha(t_u8 c);

/**
 * @brief Check si la chaine de caractere est composee de lettres
 *
 * @param str la chaine de caractere a tester
 * @return 1 si la chaine de caractere est composee de lettres, 0 sinon
 */
t_u8   ft_str_isalpha(char *str);
/* ************************************************************************** */
/* PATH : ./ctype/ft_isascii.c */

/**
 * @brief Check si le caractere est un caractere ascii
 *
 * @param c le caractere a tester
 * @return 1 si le caractere est un caractere ascii, 0 sinon
 */
t_u8	ft_isascii(t_u8 c);
/* ************************************************************************** */
/* PATH : ./ctype/ft_iscntrl.c */

/**
 * @brief Check si le caractere est un caractere de controle
 *
 * @param c le caractere a tester
 * @return 1 si le caractere est un caractere de controle, 0 sinon
 */
t_u8	ft_iscntrl(t_u8 c);
/* ************************************************************************** */
/* PATH : ./ctype/ft_isdigit.c */

/**
 * @brief Check si le caractere est un chiffre
 *
 * @param c le caractere a tester
 * @return 1 si le caractere est un chiffre, 0 sinon
 */
t_u8	ft_isdigit(t_u8 c);

/**
 * @brief Check si la chaine de caractere est composee de chiffres
 *
 * @param str la chaine de caractere a tester
 * @return 1 si la chaine de caractere est composee de chiffres, 0 sinon
 */
t_u8   ft_str_isdigit(char *str);
/* ************************************************************************** */
/* PATH : ./ctype/ft_isgraph.c */

/**
 * @brief Check si le caractere est un caractere graphique
 *
 * @param c le caractere a tester
 * @return 1 si le caractere est un caractere graphique, 0 sinon
 */
t_u8	ft_isgraph(t_u8 c);
/* ************************************************************************** */
/* PATH : ./ctype/ft_isprint.c */

/**
 * @brief Check si le caractere est imprimable
 *
 * @param c le caractere a tester
 * @return 1 si le caractere est imprimable, 0 sinon
 */
t_u8	ft_isprint(t_u8 c);
/* ************************************************************************** */
/* PATH : ./ctype/ft_tolower.c */

/**
 * @brief Transforme un caractere en minuscule
 *
 * @param c le caractere a transformer
 * @return le caractere en minuscule
 */
t_u8	ft_tolower(t_u8 c);
/* ************************************************************************** */
/* PATH : ./ctype/ft_toupper.c */

/**
 * @brief Transforme un caractere en majuscule
 *
 * @param c le caractere a transformer
 * @return le caractere en majuscule
 */

t_u8	ft_toupper(t_u8 c);
/* ************************************************************************** */
/* PATH : ./ctype/ft_ispunct.c */

/**
 * @brief Check si le caractere est un caractere de ponctuation
 *
 * @param c le caractere a tester
 * @return 1 si le caractere est un caractere de ponctuation, 0 sinon
 */
t_u8	ft_ispunct(t_u8 c);
/* ************************************************************************** */
/* PATH : ./ctype/ft_isspace.c */

/**
 * @brief Check si le caractere est un espace
 *
 * @param c le caractere a tester
 * @return  1 si le caractere est un espace, 0 sinon
 */

t_u8	ft_isspace(t_u8 c);
/* ************************************************************************** */
/* PATH : ./ctype/ft_isxdigit.c */

/**
 * @brief Check si le caractere est un chiffre hexadecimal
 *
 * @param c le caractere a tester
 * @return  1 si le caractere est un chiffre hexadecimal, 0 sinon
 */
t_u8	ft_isxdigit(t_u8 c);
/* ************************************************************************** */
/* PATH : ./ctype/ft_toupper.c */

/**
 * @brief Transforme une chaine de caractere en majuscule
 * @param str Chaine de caractere a transformer
 * @return  la chaine de caractere en majuscule
 */
char	*ft_str_toupper(char *str);
/* ************************************************************************** */
/* PATH : ./ctype/ft_tolower.c */

/**
 * @brief Transforme une chaine de caractere en minuscule
 * @param str Chaine de caractere a transformer
 * @return  la chaine de caractere en minuscule
 */
char	*ft_str_tolower(char *str);
/* ************************************************************************** */

#endif // FT_CTYPE_H