/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:48:32 by maroy             #+#    #+#             */
/*   Updated: 2023/12/05 14:58:21 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEMORY_H
# define FT_MEMORY_H

# include "libft.h"

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_free_tab(char **tab);
void	*ft_free(void *ptr);
void	*ft_malloc(size_t size);
void	*ft_memalloc(size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memdup(const void *src, size_t size);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_realloc(void *ptr, size_t size);

#endif // FT_MEMORY_H
