/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:04:21 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/29 14:04:49 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_trimleft(const char *s1, const char *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[j] != 0)
	{
		if (s1[i] == set[j])
		{
			i += 1;
			j = 0;
		}
		else
			j += 1;
	}
	return (i);
}

static int	ft_trimright(const char *s1, const char *set, int i)
{
	int	j;

	j = 0;
	while (set[j] != 0)
	{
		if (s1[i] == set[j])
		{
			i -= 1;
			j = 0;
		}
		else
			j += 1;
	}
	return (i);
}

static char	*ft_applystr(char *trimmedstr, const char *s1, int i, int l)
{
	int	j;

	j = 0;
	while (l <= i)
		trimmedstr[j++] = s1[l++];
	trimmedstr[j] = '\0';
	return (trimmedstr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*trimmedstr;
	int		j;
	int		l;

	j = 0;
	i = ft_trimleft(s1, set);
	l = i;
	if (s1[i] != 0)
	{
		while (s1[i + 1] != 0)
			i += 1;
		i = ft_trimright(s1, set, i);
		trimmedstr = malloc(((i + 1) - l + 1) * sizeof(char));
		if (!trimmedstr)
			return (NULL);
		return (ft_applystr(trimmedstr, s1, i, l));
	}
	trimmedstr = malloc(1 * sizeof(char));
	if (!trimmedstr)
		return (NULL);
	trimmedstr[j] = '\0';
	return (trimmedstr);
}

// int	main(void)
// {
// 	printf("ft_strtrim(\"trtestreurt\", \"tr\"):\n");
// 	printf("%s\n", ft_strtrim("trtestreurt", "tr"));
// 	printf("ft_strtrim(\"\", \"\"):\n");
// 	printf("%s\n", ft_strtrim("", ""));
// 	printf("ft_strtrim(\"tr\", \"tr\"):\n");
// 	printf("%s\n", ft_strtrim("tr", "tr"));
// }
//
//
//
//
//