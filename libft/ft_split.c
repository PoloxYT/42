/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:31:03 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/27 08:56:50 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_how_much_strings(const char	*s, char c)
{
	int	i;
	int	k;
	int	inword;

	i = 0;
	k = 0;
	inword = 0;
	while (s[i] != 0)
	{
		if (s[i] == c && inword == 1)
			inword = 0;
		else if (s[i] != c && inword == 0)
		{
			inword = 1;
			k += 1;
		}
		i += 1;
	}
	return (k);
}

static int	ft_freeall(char	**strs)
{
	int	i;

	i = 0;
	while (strs[i] != NULL)
	{
		free(strs[i]);
		i += 1;
	}
	free(strs);
	return (0);
}

static int	ft_split2(int i, char **strs, const char *s, char c)
{
	int	k;
	int	l;
	int	j;

	k = 0;
	l = 0;
	j = 0;
	while (i < (ft_how_much_strings(s, c)))
	{
		while (s[j] == c)
			j += 1;
		l = j;
		while (s[j] != c && s[j] != 0)
			j += 1;
		j += 1;
		strs[i] = malloc((j - l) * sizeof(char));
		if (!strs[i])
			return (ft_freeall(strs));
		while (l != j - 1)
			strs[i][k++] = s[l++];
		strs[i][k] = '\0';
		i += 1;
		k = 0;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**strs;

	i = 0;
	strs = malloc((ft_how_much_strings(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	while (i <= ft_how_much_strings(s, c))
	{
		strs[i] = NULL;
		i += 1;
	}
	i = 0;
	if (ft_split2(i, strs, s, c) == 0)
		return (NULL);
	return (strs);
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
// 	i = 0;
// 	printf("ft_split(\"    a   b    \", ' '):\n");
// 	while (i < 3)
// 	{
// 		printf("%s\n", ft_split("    a   b    ", ' ')[i]);
// 		i += 1;
// 	}
// }
//
//
//
//