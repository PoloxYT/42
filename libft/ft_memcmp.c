/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:48:39 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/23 11:03:08 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stddef.h>

int	ft_memcmp(const void *point1, const void *point2, size_t size)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	i = 0;
	p1 = (unsigned char *)(point1);
	p2 = (unsigned char *)(point2);
	while (i < size - 1 && p1[i] == p2[i])
		i += 1;
	return (p1[i] - p2[i]);
}

// int	main(void)
// {
// 	printf("ft_memcmp(\"testa\", \"testb\", 5): ");
// 	printf("%d\n", ft_memcmp("testa", "testb", 5));
// 	printf("ft_memcmp(\"test\", \"test\", 2): ");
// 	printf("%d\n", ft_memcmp("test", "test", 2));
// 	printf("ft_memcmp(\"testb\", \"testa\", 5): ");
// 	printf("%d\n", ft_memcmp("testb", "testa", 5));
// }