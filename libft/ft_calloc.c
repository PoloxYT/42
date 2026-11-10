/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:22:45 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/28 10:03:22 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t ecount, size_t esize)
{
	size_t			i;
	unsigned char	*alloc;

	i = 0;
	if (esize != 0)
	{
		if ((size_t)(-1) / esize < ecount)
			return (NULL);
	}
	alloc = malloc(ecount * esize);
	if (!alloc)
		return (NULL);
	while (i < (ecount * esize))
	{
		alloc[i] = 0;
		i += 1;
	}
	return (alloc);
}

// int	main(void)
// {
// 	printf("ft_calloc: %s\n", (char *)(ft_calloc(7, 7)));
// 	printf("(il faut changer le caractere de remplacement pour le test");
// 	printf(" puisque le caractere nul n'est pas printable)");
// }