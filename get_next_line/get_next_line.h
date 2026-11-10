/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 09:27:17 by pabaille          #+#    #+#             */
/*   Updated: 2026/11/10 09:56:23 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# if !defined(BUFFER_SIZE)
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_len(const char *s);
char	*ft_sub(char *s, unsigned int start, size_t len);
char	*ft_strjoin(char *s1, char const *s2);

#endif