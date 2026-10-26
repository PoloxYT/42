/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:58:57 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/26 10:33:09 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

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
	i -= 1;
	while (i >= 0)
	{
		write(fd, &str[i], 1);
		i -= 1;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	c = 'g';
	if (n == -2147483648)
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
// 	printf("\n");
// }