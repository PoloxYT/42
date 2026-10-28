/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:58:32 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/28 10:11:05 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stddef.h>
#include "libft.h"

int	ft_atoi(const char	*str)
{
	int		i;
	int		signe;
	long	num;

	i = 0;
	signe = 1;
	num = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i += 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i += 1;
	}
	while (str[i] != 0)
	{
		if (str[i] < '0' || str[i] > '9')
			return (((int)(num / 10)) * signe);
		num += str[i] - '0';
		num *= 10;
		i += 1;
	}
	num = (num / 10) * signe;
	return ((int)(num));
}

// int	main(void)
// {
// 	printf("ft_atoi: %d\n", ft_atoi("      -1234567"));
// 	printf("ft_atoi: %d\n", ft_atoi(" \t +1234567"));
// 	printf("ft_atoi: %d\n", ft_atoi("123abc4567"));
// 	printf("ft_atoi: %d\n", ft_atoi("-2147483648"));
// 	printf("ft_atoi: %d\n", ft_atoi("2147483647"));
// }
//