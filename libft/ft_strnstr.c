/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:54:00 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/23 11:01:36 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stddef.h>

static int	ft_strlen(const char	*str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i += 1;
	return (i);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s2)
		return ((char *)s1);
	while (s1[i] != 0 && i != len)
	{
		while (s2[j] != 0 && (i + j) < len)
		{
			if ((int)(j) == (ft_strlen(s2) - 1) && s1[i + j] == s2[j])
				return ((char *)(&s1[i]));
			if (s1[i + j] != s2[j])
			{
				j = 0;
				break ;
			}
			j += 1;
		}
		i += 1;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("ft_strnstr(\"test\", \"st\"): %s\n", ft_strnstr("test", "st", 4));
// 	printf("ft_strnstr(\"test\", \"t\"): %s\n", ft_strnstr("test", "t", 2));
// 	printf("ft_strnstr(\"test\", \"G\"): %s\n", ft_strnstr("test", "G", 4));
// }