/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_char.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 14:25:17 by lduplain          #+#    #+#             */
/*   Updated: 2023/11/28 22:43:01 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_CHAR_H
# define FT_DISPLAY_CHAR_H

# include "libft.h"
/* ************************************************************************** */
/* PATH : ./display/char/ft_putchar_fd.c */

/**
 * @brief Print character c sur le file descriptor fd.
 * 
 * @param fd le file descriptor sur lequel imprimer
 * @param c le caractere a imprimer
 * @return  le nombre de caracteres imprimes
 */
size_t	ft_putchar_fd(int fd, char c);
/* ************************************************************************** */
/* PATH : ./display/char/ft_putchar_fdnl.c */

/**
 * @brief Print character c sur le  fd suivi d'un retour a la ligne.
 * 
 * @param fd le file descriptor sur lequel imprimer
 * @param c le caractere a imprimer
 * @return  le nombre de caracteres imprimes
 */
size_t	ft_putchar_fdnl(int fd, char c);
/* ************************************************************************** */
/* PATH : ./display/char/ft_putchar.c */

/**
 * @brief Print character c sur la sortie standard.
 * 
 * @param c le caractere a imprimer
 * @return  le nombre de caracteres imprimes
 */
size_t	ft_putchar(char c);
/* ************************************************************************** */
/* PATH : ./display/char/ft_putchar_nl.c */

/**
 * @brief Print character c sur la sortie standard suivi d'un retour a la ligne.
 * 
 * @param c le caractere a imprimer
 * @return  le nombre de caracteres imprimes
 */
size_t	ft_putchar_nl(char c);
/* ************************************************************************** */
/*  PATH : ./display/char/ft_putchar_err.c */

/**
 * @brief Print character c sur la sortie d'erreur.
 * 
 * @param c le caractere a imprimer
 * @return  le nombre de caracteres imprimes
 */
size_t	ft_putchar_err(char c);
/* ************************************************************************** */
/* PATH : ./display/char/ft_putchar_errnl.c */

/**
 * @brief Print character c sur la sortie d'erreur suivi d'un retour a la ligne.
 * 
 * @param c le caractere a imprimer
 * @return  le nombre de caracteres imprimes
 */
size_t	ft_putchar_errnl(char c);
/* ************************************************************************** */
/* PATH : ./display/char/ft_putnchar_fd.c */

/**
 * @brief Print character c n fois sur le file descriptor fd.
 * 
 * @param fd le file descriptor sur lequel imprimer
 * @param c le caractere a imprimer
 * @param n le nombre de fois a imprimer c
 * @return  le nombre de caracteres imprimes
 */
size_t	ft_putnchar_fd(int fd, char c, size_t n);
/* ************************************************************************** */
/* PATH : ./display/char/ft_putnchr_fdnl */

/**
 * @brief Print character c n fois sur le fd suivi d'un retour a la ligne.
 * 
 * @param fd le file descriptor sur lequel imprimer
 * @param c le caractere a imprimer
 * @param n le nombre de fois a imprimer c
 * @return  le nombre de caracteres imprimes
 */
size_t	ft_putnchar_fdnl(int fd, char c, size_t n);
/* ************************************************************************** */
/* PATH : ./display/char/ft_putnchar.c */

/**
 * @brief Print character c n fois sur la sortie standard.
 * 
 * @param c le caractere a imprimer
 * @param n le nombre de fois a imprimer c
 * @return  le nombre de caracteres imprimes
 */
size_t	ft_putnchar(char c, size_t n);
/* ************************************************************************** */
/* PATH : ./display/char/ft_putnchar_nl.c */

/**
 * @brief Print character c n fois sur la 
 * sortie standard suivi d'un retour a la ligne.
 * 
 * @param c le caractere a imprimer
 * @param n le nombre de fois a imprimer c
 * @return  le nombre de caracteres imprimes
 */
size_t	ft_putnchar_nl(char c, size_t n);
/* ************************************************************************** */
/* PATH : ./display/char/ft_putnchar_err.c */

/**
 * @brief Print character c n fois sur la sortie d'erreur.
 * 
 * @param c le caractere a imprimer
 * @param n  le nombre de fois a imprimer c
 * @return le nombre de caracteres imprimes
 */
size_t	ft_putnchar_err(char c, size_t n);
/* ************************************************************************** */
/* PATH : ./display/char/ft_putnchar_errnl.c */

/**
 * @brief Print character c n fois sur la sortie 
 * d'erreur suivi d'un retour a la ligne.
 * 
 * @param c le caractere a imprimer
 * @param n le nombre de fois a imprimer c
 * @return le nombre de caracteres imprimes
 */
size_t	ft_putnchar_errnl(char c, size_t n);
/* ************************************************************************** */

#endif // FT_DISPLAY_CHAR_H
