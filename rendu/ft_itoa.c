/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:31:39 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/29 14:07:18 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

static char	*ft_applymin(char *str)
{
	str = malloc(12 * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = '\0';
	return (str);
}

static char	*ft_revstr(int n, char *str, int i, int isnegative)
{
	char	newstr[12];
	int		j;

	j = 0;
	newstr[11] = '\0';
	while (n != 0)
	{
		newstr[j] = (n % 10) + '0';
		j += 1;
		n = n / 10;
	}
	if (isnegative == 1)
	{
		newstr[j] = '-';
		i += 1;
	}
	j -= 1;
	str = malloc((i + (j + 2)) * sizeof(char));
	if (!str)
		return (NULL);
	while (j >= 0)
		str[i++] = newstr[j--];
	str[i] = '\0';
	return (str);
}

static	char	*ft_applychiffre(int n, int i, char *str)
{
	str[i] = n + '0';
	str[i + 1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		isnegative;

	i = 0;
	str = NULL;
	isnegative = 0;
	if (n == -2147483648)
		return (ft_applymin(str));
	if (n < 0)
	{
		isnegative = 1;
		n = -n;
	}
	if (n <= 9)
	{
		str = malloc((isnegative + 2) * sizeof(char));
		if (!str)
			return (NULL);
		if (isnegative == 1)
			str[i++] = '-';
		return (ft_applychiffre(n, i, str));
	}
	return (ft_revstr(n, str, i, isnegative));
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(21));
// 	printf("%s\n", ft_itoa(3));
// 	printf("%s\n", ft_itoa(2147483647));
// 	printf("%s\n", ft_itoa(-7));
// 	printf("%s\n", ft_itoa(-13712));
// 	printf("%s\n", ft_itoa(-2147483648));
// }
//
//
//
//
//