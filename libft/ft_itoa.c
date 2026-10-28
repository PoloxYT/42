/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:31:39 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/28 09:53:57 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

static void	*ft_allocate(size_t ecount, size_t esize)
{
	size_t			i;
	unsigned char	*alloc;

	i = 0;
	alloc = malloc(ecount * esize);
	if (!alloc)
		return (NULL);
	while (i < (ecount * esize))
	{
		alloc[i] = 0;
		i += 1;
	}
	return (alloc);
}

static char	*ft_applymin(char *str)
{
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
	return (str);
}

static char	*ft_revstr(int n, char *str, int i)
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
	j -= 1;
	while (j >= 0)
	{
		str[i] = newstr[j];
		i += 1;
		j -= 1;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_allocate(12, sizeof(char));
	if (!str)
		return (NULL);
	if (n == -2147483648)
	{
		ft_applymin(str);
		return (str);
	}
	if (n < 0)
	{
		str[i] = '-';
		n = -n;
		i += 1;
	}
	if (n <= 9)
	{
		str[i] = n + '0';
		return (str);
	}
	return (ft_revstr(n, str, i));
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