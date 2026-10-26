/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:31:03 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/22 16:43:39 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

static int	ft_how_much_strings(const char	*s, char c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
			k += 1;
		i += 1;
	}
	return (k);
}

static char	**ft_splitting(char const *s, char c, char **strs)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != 0)
	{
		while (s[i] != c)
		{
			strs[j][k] = s[i];
			i += 1;
			k += 1;
		}
		i += 1;
		k = 0;
		j += 1;
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**strs;

	i = 0;
	j = 0;
	k = 0;
	strs = malloc(ft_how_much_strings(s, c) * sizeof(char *));
	if (!strs)
		return (NULL);
	while (s[i] != 0)
	{
		while (s[i++] != c)
			k += 1;
		strs[j] = malloc(k * sizeof(char));
		if (!strs[j])
			return (NULL);
		i += 1;
		j += 1;
		k = 0;
	}
	return (ft_splitting(s, c, strs));
}

// int	main(void)
// {
// 	int	i;

// 	i = 0;
// 	printf("ft_split(\"je;suis;un;test;\", ';'):\n");
// 	while (i < 5)
// 	{
// 		printf("%s\n", ft_split("je;suis;un;test;", ';')[i]);
// 		i += 1;
// 	}
// }