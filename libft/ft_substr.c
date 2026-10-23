/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 09:53:25 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/23 13:38:45 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i += 1;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	char			*substr;

	i = 0;
	j = 0;
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
	{
		substr[len + 1] = '\0';
		return (substr);
	}
	while (i < start)
		i += 1;
	while (j < len && s[i] != 0)
	{
		substr[j] = s[i];
		j += 1;
		i += 1;
	}
	substr[j] = '\0';
	return (substr);
}

// int	main(void)
// {
// 	printf("ft_substr(\"un pti test\", 7, 4):\n");
// 	printf("%s\n", ft_substr("un pti test", 7, 4));
// }