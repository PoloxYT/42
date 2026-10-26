/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:20:39 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/23 14:44:57 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

char	*ft_strrchr(const char *str, int srch)
{
	int		i;
	char	*stock;

	i = 0;
	stock = NULL;
	while (str[i] != 0)
	{
		if ((int)str[i] == srch)
			stock = (char *)(&str[i]);
		i += 1;
	}
	if ((int)str[i] == srch)
		stock = (char *)(&str[i]);
	return (stock);
}

// int	main(void)
// {
// 	printf("ft_strrchr(\"testabc\", 's'): %s\n", ft_strrchr("testabc", 's'));
// 	printf("ft_strrchr(\"testabc\", 't'): %s\n", ft_strrchr("testabc", 't'));
// 	printf("ft_strrchr(\"testabc\", 'G'): %s\n", ft_strrchr("testabc", 'G'));
// 	printf("ft_strrchr(\"testabc\", '/0'): %s\n", ft_strrchr("testabc", '\0'));
// }