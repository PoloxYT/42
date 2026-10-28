/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 09:53:25 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/28 09:46:55 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

static size_t	ft_len(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i += 1;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
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
	substr = malloc((start + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	start = j;
	j = 0;
	while (j < len && s[start] != 0)
		substr[j++] = s[start++];
	substr[j] = '\0';
	return (substr);
}

// int	main(void)
// {
// 	printf("ft_substr(\"un pti test\", 7, 4):\n");
// 	printf("%s\n", ft_substr("un pti test", 7, 4));
// }