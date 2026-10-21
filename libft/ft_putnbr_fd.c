/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:58:57 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/20 15:36:14 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

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

static void	ft_putrevstr_fd(int n, int fd)
{
	int		i;
	char	str[11];

	i = 0;
	str[10] = '\0';
	while (n != 0)
	{
		str[i] = (n % 10) + '0';
		i += 1;
		n = n / 10;
	}
	while (i >= 0)
	{
		write(fd, &str[i], 1);
		i -= 1;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	int		i;
	int		lim;

	i = 0;
	lim = -2147483648;
	c = 'g';
	if (ft_memcmp(&n, &lim, 11) == 0)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n <= 9)
	{
		c = n + '0';
		write(fd, &c, 1);
		return ;
	}
	ft_putrevstr_fd(n, fd);
}

// int	main(void)
// {
// 	ft_putnbr_fd(21, 1);
// 	printf("\n");
// 	ft_putnbr_fd(2147483647, 1);
// 	printf("\n");
// 	ft_putnbr_fd(3, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-13712, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-2147483648, 1);
// }