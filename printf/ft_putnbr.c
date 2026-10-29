/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:32:49 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/29 14:34:34 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putrevstr(int n, int cnt)
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
		write(1, &str[i], 1);
		cnt += 1;
		i -= 1;
	}
	return (cnt);
}

int	ft_putnbr(int n, int cnt)
{
	char	c;

	c = 'g';
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		cnt += 11;
		return (cnt);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		cnt += 1;
		n = -n;
	}
	if (n <= 9)
	{
		c = n + '0';
		write(1, &c, 1);
		cnt += 1;
		return (cnt);
	}
	cnt = ft_putrevstr(n, cnt);
	return (cnt);
}
