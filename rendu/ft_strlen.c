/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:21:58 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/29 10:35:03 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stddef.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i += 1;
	return (i);
}

// int	main(void)
// {
// 	printf("ft_strlen(\"test\"): %zu\n", ft_strlen("test"));
// 	printf("ft_strlen(\"test1\"): %zu\n", ft_strlen("test1"));
// 	printf("ft_strlen(\"\"): %zu\n", ft_strlen(""));
// }