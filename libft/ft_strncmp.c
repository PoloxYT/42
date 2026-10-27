/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:22:28 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/26 10:42:13 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stddef.h>

int	ft_strncmp(const char *str1, const char *str2, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
		return (0);
	while (str1[i] != 0 && i < len - 1 && str1[i] == str2[i])
		i += 1;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

// int	main(void)
// {
// 	printf("ft_strncmp(\"testa\", \"testb\", 5): ");
// 	printf("%d\n", ft_strncmp("testa", "testb", 5));
// 	printf("ft_strncmp(\"test\", \"test\", 2): ");
// 	printf("%d\n", ft_strncmp("test", "test", 2));
// 	printf("ft_strncmp(\"testb\", \"testa\", 5): ");
// 	printf("%d\n", ft_strncmp("testb", "testa", 5));
// 	printf("ft_strncmp(\"abd\", \"abc\", 2): ");
// 	printf("%d\n", ft_strncmp("abd", "abc", 2));
// }
//