/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:31:39 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/21 09:22:07 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

static void	*ft_calloc(size_t eCount, size_t eSize)
{
	size_t			i;
	unsigned char	*alloc;

	i = 0;
	alloc = malloc(eCount * eSize);
	if (!alloc)
		return (NULL);
	while (i < (eCount * eSize))
	{
		alloc[i] = 0;
		i += 1;
	}
	return (alloc);
}

static int	*ft_find(int n)
{
	int	count;
	int	temp;
	int	*tab;

	count = 1;
	temp = n;
	tab = malloc(2 * sizeof(int));
	if (!tab)
		return (NULL);
	while (temp > 9)
	{
		temp = temp / 10;
		count *= 10;
	}
	tab[0] = temp;
	tab[1] = count;
	return (tab);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_calloc(11, sizeof(char));
	if (!str)
		return (NULL);
	if (n + 2147483647 == -1)
		return ("-2147483648");
	if (n < 0)
	{
		str[i++] = '-';
		n = -n;
	}
	while (n > 9)
	{
		str[i++] = ft_find(n)[0] + '0';
		n = n % ft_find(n)[1];
	}
	str[i] = n + '0';
	return (str);
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