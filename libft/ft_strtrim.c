/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:04:21 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/26 15:23:27 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

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

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*trimmedstr;
	int		j;
	int		l;

	i = 0;
	j = 0;
	l = 0;
	while (s1[i] != 0)
		i += 1;
	trimmedstr = malloc((i + 1) * sizeof(char));
	if (!trimmedstr)
		return (NULL);
	i = ft_trimleft(s1, set);
	l = i;
	while (s1[i + 1] != 0)
		i += 1;
	i = ft_trimright(s1, set, i);
	while (l <= i)
		trimmedstr[j++] = s1[l++];
	trimmedstr[j] = '\0';
	return (trimmedstr);
}

// int	main(void)
// {
// 	printf("ft_strtrim(\"trtestreurt\", \"tr\"):\n");
// 	printf("%s\n", ft_strtrim("trtestreurt", "tr"));
// }
//