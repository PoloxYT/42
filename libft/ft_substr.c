/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 09:53:25 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/21 10:03:43 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	char			*substr;

	i = 0;
	j = 0;
	substr = malloc(len * sizeof(char));
	if (!substr)
		return (NULL);
	while (i < start)
		i += 1;
	while (j < len)
	{
		substr[j] = s[i];
		j += 1;
		i += 1;
	}
	return (substr);
}

// int	main(void)
// {
// 	printf("ft_substr(\"un pti test\", 7, 4):\n");
// 	printf("%s\n", ft_substr("un pti test", 7, 3));
// }