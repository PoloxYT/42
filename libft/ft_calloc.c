/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:22:45 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/20 15:44:40 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t eCount, size_t eSize)
{
	size_t			i;
	unsigned char	*alloc;

	i = 0;
	alloc = malloc(eCount * eSize);
	if (!alloc)
		return (NULL);
	while (i < (eCount * eSize))
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