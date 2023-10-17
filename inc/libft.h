/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   libft.h                                           ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2022/10/17 12:41:20 by maroy                                    */
/*   Updated: 2023/10/17 17:25:15 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "dlist.h"
# include "list.h"
# include "ctype.h"
# include "cmath.h"
# include "ft_stdint.h"


# define BUFFER_SIZE 1024

// string.h
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t len);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memalloc(size_t size);
size_t				ft_strlen(const char *s);
// Returns a pointer to the first occurrence of character in the C string str.
// The terminating null-character is considered part of the C string. Therefore,
// it can also be located in order to retrieve a pointer to the end of a string.
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				ft_bzero(void *s, size_t n);

// stdlib.h
void				*ft_calloc(size_t count, size_t size);
char				*ft_itoa(int n);
int					ft_atoi(const char *str);

// Put[] functions
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putnbr_fd(int n, int fd);

char				**ft_split(char const *s, char c);
char				*ft_strdup(const char *s1);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);

// GNL
char				*get_next_line(int fd);

//* Mes Fonctions *//

/// @brief Skip all the characters c in the string str ,
/// Stops when non c character is found
/// @param str The string to skip
/// @param c The character to skip
/// @return The string after skipping all the characters c
char				*ft_skip_chars(char *str, char c);

/// @brief Check if the number n is in the range [low - high]
/// @param n The number to check
/// @param low The lower bound
/// @param high Ther Higher Bound
/// @return 1 if n is in the range [low - high] , 0 otherwise
int					ft_inrange(int n, int low, int high);

//	Memory
void				*ft_malloc(size_t size);
void				*ft_realloc(void *ptr, size_t size);
void				*ft_free(void *ptr);
void				ft_free_tab(char **tab);

// string.h
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strcat(char *dest, const char *src);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strtok(char *str, const char *delim);

// atol , atof
float				ft_atof(const char *str);
long				ft_atol(const char *str);

// custom
int					ft_count_char(char *s, char c);
int					ft_count_words(char *str, char *charset);
int					ft_tablen(char **env);
char				*ft_strjoin_free(char *s1, char *s2);
char				*ft_strjoin_char(char *s, char c);
uint8_t				ft_strequal(const char *s1, const char *s2);

int					is_white_space(char *buff);
// Random
int					ft_rand(int min, int max);

#endif
