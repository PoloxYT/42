/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:15:52 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/23 14:43:23 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strchr(const char	*str, int srch)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		if ((int)str[i] == (char)srch)
			return ((char *)(&str[i]));
		i += 1;
	}
	if ((int)str[i] == (char)srch)
		return ((char *)(&str[i]));
	return (NULL);
}

// int	main(void)
// {
// 	printf("ft_strchr(\"test\", 's'): %s\n", ft_strchr("test", (int)'s'));
// 	printf("ft_strchr(\"test\", 't'): %s\n", ft_strchr("test", (int)'t'));
// 	printf("ft_strchr(\"test\", 'G'): %s\n", ft_strchr("test", (int)'G'));
// 	printf("ft_strchr(\"test\", '/0'): %s\n", ft_strchr("test", (int)'\0'));
// }
//
//
//
//
//