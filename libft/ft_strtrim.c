/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:04:21 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/21 10:21:47 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*trimmedstr;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != 0)
		i += 1;
	trimmedstr = malloc(i * sizeof(char));
	if (!trimmedstr)
		return (NULL);
	i = 0;
	while (s1[i] != 0)
	{
		while (set[j] != 0)
			if (set[j++] == s1[i])
				break ;
		if (set[j - 1] != s1[i])
			trimmedstr[k++] = s1[i];
		j = 0;
		i += 1;
	}
	return (trimmedstr);
}

// int	main(void)
// {
// 	printf("ft_strtrim(\"testeur\", \"tr\"):\n");
// 	printf("%s\n", ft_strtrim("testeur", "tr"));
// }