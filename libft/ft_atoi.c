/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:58:32 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/20 15:35:20 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

static int	ft_memcmp(const void *point1, const void *point2, size_t size)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	i = 0;
	p1 = (unsigned char *)(point1);
	p2 = (unsigned char *)(point2);
	while (p1[i] != 0 && i < size && p1[i] == p2[i])
		i += 1;
	return (p1[i] - p2[i]);
}

int	ft_atoi(char	*str)
{
	int		i;
	int		signe;
	long	num;

	i = 0;
	signe = 1;
	num = 0;
	if (ft_memcmp(str, "-2147483648", 11) == 0)
		return (-2147483648);
	while (str[i] == ' ')
		i += 1;
	if (str[i] == '-')
	{
		signe *= -1;
		i += 1;
	}
	while (str[i] != 0)
	{
		if (str[i] < '0' || str[i] > '9')
			return (((int)(num) / 10) * signe);
		num += str[i] - '0';
		num *= 10;
		i += 1;
	}
	return (((int)(num / 10)) * signe);
}

// int	main(void)
// {
// 	printf("ft_atoi: %d\n", ft_atoi("      -1234567"));
// 	printf("ft_atoi: %d\n", ft_atoi("1234567"));
// 	printf("ft_atoi: %d\n", ft_atoi("123abc4567"));
// 	printf("ft_atoi: %d\n", ft_atoi("-2147483648"));
// 	printf("ft_atoi: %d\n", ft_atoi("2147483647"));
// }