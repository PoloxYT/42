/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:48:57 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/23 10:13:57 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stddef.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i += 1;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != 0 && i < size - 1)
	{
		dst[i] = src[i];
		i += 1;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	test[] = "testabc";
// 	char	dest[] = "\0\0\0\0\0\0\0";
// 	char	test1[] = "testabc";
// 	char	dest1[] = "\0\0\0\0\0\0\0";

// 	printf("ft_strlcpy(dest, test, 7): %zu\n", ft_strlcpy(dest, test, 7));
// 	printf("dest: %s\n", dest);
// 	printf("ft_strlcpy(dest, test, 4): %zu\n", ft_strlcpy(dest1, test1, 4));
// 	printf("dest: %s\n", dest1);
// }