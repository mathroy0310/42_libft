/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:26:45 by maroy             #+#    #+#             */
/*   Updated: 2023/11/28 23:32:59 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include "libft.h"

/*
**	Return appended string (char *)str with char c.
**	./strings/ft_append_char_to_str.c
**	Return NULL if calloc failed.
*/
char	*ft_append_char_to_str(char *str, char c);

/*
**	Append two strings (s1 and s2) in a new one.
**	Free s1 if free_s1 is TRUE.
**	Free s2 if free_s2 is TRUE.
**	Return value is null terminated.
**	./strings/ft_append_strs.c
**
**	Return:
**	(char *)result.
**	The string containing s1 and s2, null terminated.
*/
char	*ft_append_strs(char *s1, char *s2, t_bool free_s1, t_bool free_s2);
/*
**	Append string back of string to_mult n times.
**	(!WARNING) if to_mult is mallocated, ft_strmult_* don't free it.
**	./strings/ft_strmult_front.c
*/
char	*ft_strmult_front(char *to_mult, char *back, size_t n,
			t_bool free_back);

/*
**	Append string front of string to_mult n times.
**	(!WARNING) if to_mult is mallocated, ft_strmult_* don't free it.
**	./strings/ft_strmult_back.c
*/
char	*ft_strmult_back(char *to_mult, char *front, size_t n,
			t_bool free_front);

char	*ft_strdup(const char *s1);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strndup(const char *str, size_t n, t_bool free_str);
// Returns a pointer to the first occurrence of character in the C string str.
// The terminating null-character is considered part of the C string. Therefore,
// it can also be located in order to retrieve a pointer to the end of a string.
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strcpy(const char *source, char *destination);
char	*ft_strcat(char *dest, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strtok(char *str, const char *delim);

void	*ft_destroy_str_arr(char ***string_array);

ssize_t	ft_find_char(char *str, char c);
t_bool	ft_contains_char(char *str, char c);

#endif // FT_STRING_H