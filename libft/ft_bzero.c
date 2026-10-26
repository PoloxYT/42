/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:41:37 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/22 15:39:15 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*mem;
	size_t			i;

	i = 0;
	mem = (unsigned char *)(s);
	while (i != n)
	{
		mem[i] = '\0';
		i += 1;
	}
}

// int	main(void)
// {
// 	char	test[] = "testabc";

// 	printf("test = \"testabc\"\n");
// 	printf("ft_bzero(test, 7)\n");
// 	ft_bzero(test, 7);
// 	printf("test = %s", test);
// }