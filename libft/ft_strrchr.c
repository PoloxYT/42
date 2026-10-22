/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:20:39 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/22 15:42:48 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

char	*ft_strrchr(char *str, int srch)
{
	int		i;
	char	*stock;

	i = 0;
	stock = NULL;
	while (str[i] != 0)
	{
		if (str[i] == srch)
			stock = &str[i];
		i += 1;
	}
	return (stock);
}

// int	main(void)
// {
// 	printf("ft_strrchr(\"test\", 's'): %s\n", ft_strrchr("test", 's'));
// 	printf("ft_strrchr(\"test\", 't'): %s\n", ft_strrchr("test", 't'));
// 	printf("ft_strrchr(\"test\", 'G'): %s\n", ft_strrchr("test", 'G'));
// }