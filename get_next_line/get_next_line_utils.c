/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 09:35:25 by pabaille          #+#    #+#             */
/*   Updated: 2026/11/03 14:38:19 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t	ft_min(size_t i, size_t j)
{
	if (i < j)
		return (i);
	return (j);
}

char	*ft_sub(char *s, unsigned int start, size_t len)
{
	size_t			j;
	char			*substr;

	j = start;
	if ((unsigned int)ft_len(s) < start)
	{
		substr = malloc((1) * sizeof(char));
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	while (s[start] != 0)
		start += 1;
	start -= j;
	substr = malloc((ft_min(len, (size_t)start) + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	start = j;
	j = 0;
	while (j < len && s[start] != 0)
		substr[j++] = s[start++];
	substr[j] = '\0';
	free(s);
	return (substr);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char *)(dest);
	s = (unsigned char *)(src);
	while (i < n)
	{
		d[i] = s[i];
		i += 1;
	}
	return (dest);
}

size_t	ft_len(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i += 1;
	return (i);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	int		i;
	char	*strsjoined;
	int		j;

	if (!s1)
	{
		s1 = malloc(1 * sizeof(char));
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	i = ft_len(s1);
	j = ft_len(s2);
	strsjoined = malloc((i + j + 1) * sizeof(char));
	if (!strsjoined)
		return (NULL);
	i = 0;
	j = ft_len(s1);
	strsjoined = ft_memcpy(strsjoined, s1, ft_len(s1));
	while (s2[i] != 0)
		strsjoined[j++] = s2[i++];
	strsjoined[j] = 0;
	free(s1);
	return (strsjoined);
}
//
//
//