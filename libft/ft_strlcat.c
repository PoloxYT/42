/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:05:48 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/27 13:52:02 by pabaille         ###   ########.fr       */
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

size_t	ft_strlcat(char restrict *dst, const char restrict *src, size_t size)
{
	size_t	i;
	int		j;
	size_t	sizedst;
	size_t	sizesrc;

	i = 0;
	j = 0;
	sizedst = ft_strlen(dst);
	sizesrc = ft_strlen(src);
	if (size <= sizedst)
		return (size + sizesrc);
	if (size == 0)
		return (sizedst + sizesrc);
	while (dst[i] != 0 && i < size - 1)
		i += 1;
	while (src[j] != 0 && i < size - 1)
	{
		dst[i] = src[j];
		i += 1;
		j += 1;
	}
	dst[i] = '\0';
	return (sizedst + sizesrc);
}

// int	main(void)
// {
// 	char	test[] = "testabc";
// 	char	dest[] = "untestappele:\0\0\0\0\0\0\0";
// 	char	test1[] = "testabc";
// 	char	dest1[] = "untestappele:\0\0\0\0\0\0\0";

// 	printf("ft_strlcat(dest, test, 7): %zu\n", ft_strlcat(dest, test, 21));
// 	printf("dest: %s\n", dest);
// 	printf("ft_strlcat(dest, test, 4): %zu\n", ft_strlcat(dest1, test1, 17));
// 	printf("dest: %s\n", dest1);
// }