/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:24:53 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/22 15:40:31 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stddef.h>

void	*ft_memset(void *dest, int c, size_t count)
{
	unsigned char	*desti;
	size_t			i;

	i = 0;
	desti = (unsigned char *)(dest);
	while (i != count)
	{
		desti[i] = c;
		i += 1;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	test[] = "testabc";

// 	printf("test = \"testabc\"\n");
// 	printf("ft_memset(test, 97, 7): %s\n", (char *)(ft_memset(test, 97, 7)));
// }