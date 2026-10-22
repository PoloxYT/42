/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:15:52 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/22 15:42:42 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

char	*ft_strchr(char	*str, int srch)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == srch)
			return (&str[i]);
		i += 1;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("ft_strchr(\"test\", 's'): %s\n", ft_strchr("test", 's'));
// 	printf("ft_strchr(\"test\", 't'): %s\n", ft_strchr("test", 't'));
// 	printf("ft_strchr(\"test\", 'G'): %s\n", ft_strchr("test", 'G'));
// }