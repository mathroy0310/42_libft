/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:41:20 by maroy             #+#    #+#             */
/*   Updated: 2023/12/05 14:59:35 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# if defined(__linux__)
#  define OS_LINUX 1
#  include <linux/limits.h>
# else
#  define OS_LINUX 0
#  include <limits.h>
# endif

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# include "ft_colors.h"
# include "ft_bool.h"
# include "ft_stdint.h"
# include "ft_memory.h"
# include "ft_file.h"
# include "ft_ctype.h"
# include "ft_display.h"
# include "ft_math.h"
# include "ft_string.h"
# include "ft_number.h"
# include "ft_converter.h"
# include "ft_printf.h"

# include "dlist.h"
# include "list.h"

// stdlib.h

char	*ft_itoa(int n);

char	**ft_split(char const *s, char c);

// GNL
char	*get_next_line(int fd);

//* Mes Fonctions *//

/// @brief Skip all the characters c in the string str ,
/// Stops when non c character is found
/// @param str The string to skip
/// @param c The character to skip
/// @return The string after skipping all the characters c
char	*ft_skip_chars(char *str, char c);

/// @brief Check if the number n is in the range [low - high]
/// @param n The number to check
/// @param low The lower bound
/// @param high Ther Higher Bound
/// @return 1 if n is in the range [low - high] , 0 otherwise
int		ft_inrange(int n, int low, int high);

// custom
int		ft_count_char(char *s, char c);
int		ft_count_words(char *str, char *charset);
int		ft_tablen(char **env);
char	*ft_strjoin_free(char *s1, char *s2);
char	*ft_strjoin_char(char *s, char c);
t_u8	ft_strequal(const char *s1, const char *s2);

int		is_white_space(char *buff);
// Random
void	ft_close(int fd);

#endif
