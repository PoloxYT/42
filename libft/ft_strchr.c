/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:15:52 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/23 13:23:03 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

char	*ft_strchr(const char	*str, int srch)
{
	int		i;

	i = 1;
	while (str[i - 1] != 0)
	{
		if ((int)str[i] == srch)
			return ((char *)(&str[i]));
		i += 1;
	}
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