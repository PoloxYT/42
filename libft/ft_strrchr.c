/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:20:39 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/23 10:32:10 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

char	*ft_strrchr(const char *str, int srch)
{
	int		i;
	char	returned;
	char	*returned1;

	i = 1;
	returned = '\0';
	returned1 = &returned;
	while (str[i - 1] != 0)
	{
		if ((int)str[i] == srch)
		{
			returned = (char)str[i];
			returned1 = &returned;
		}
		i += 1;
	}
	return (returned1);
}

// int	main(void)
// {
// 	printf("ft_strrchr(\"test\", 's'): %s\n", ft_strrchr("test", 's'));
// 	printf("ft_strrchr(\"test\", 't'): %s\n", ft_strrchr("test", 't'));
// 	printf("ft_strrchr(\"test\", 'G'): %s\n", ft_strrchr("test", 'G'));
// }