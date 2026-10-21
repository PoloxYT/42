/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:05:48 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/20 12:10:25 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while (dst[i] != 0)
		i += 1;
	while (src[j] != 0 && i < size)
	{
		dst[i] = src[j];
		i += 1;
		j += 1;
	}
	return (i);
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