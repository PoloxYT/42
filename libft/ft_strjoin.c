/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:22:01 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/28 09:55:21 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*strsjoined;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] != 0)
		i += 1;
	while (s2[j] != 0)
		j += 1;
	strsjoined = malloc((i + j + 1) * sizeof(char));
	if (!strsjoined)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != 0)
		strsjoined[j++] = s1[i++];
	i = 0;
	while (s2[i] != 0)
		strsjoined[j++] = s2[i++];
	strsjoined[j] = 0;
	return (strsjoined);
}

// int	main(void)
// {
// 	printf("ft_strjoin(\"un petit \", \"test\"):");
// 	printf("\n");
// 	printf("%s\n", ft_strjoin("un petit ", "test"));
// }