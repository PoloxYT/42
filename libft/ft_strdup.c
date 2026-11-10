/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:30:48 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/29 11:21:36 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_len(const char	*str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i += 1;
	return (i);
}

char	*ft_strdup(const char	*src)
{
	char	*dupli;
	int		i;

	i = 0;
	dupli = malloc(ft_len(src) * sizeof(char) + 1);
	if (!dupli)
		return (NULL);
	while (src[i] != 0)
	{
		dupli[i] = src[i];
		i += 1;
	}
	dupli[i] = 0;
	return (dupli);
}

// int	main(void)
// {
// 	printf("ft_strdup(\"test\"): %s\n", ft_strdup("test"));
// 	printf("ft_strdup(\"blablabla\"): %s\n", ft_strdup("blablabla"));
// }