/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:48:57 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/20 12:07:46 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != 0 && i <= size)
	{
		dst[i] = src[i];
		i += 1;
	}
	return (i);
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