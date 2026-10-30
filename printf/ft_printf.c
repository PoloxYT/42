/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 14:02:55 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/30 10:54:48 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthexa(unsigned long n, int class, int cnt, int x0)
{
	char	hex[20];
	int		i;
	int		isnegative;

	i = 0;
	isnegative = 0;
	if (n < 0)
	{
		isnegative = 1;
		n = -n;
	}
	while (n > 0)
	{
		if (n % 16 >= 10)
		{
			if (class == 1)
				hex[i] = (char)((n % 16) + 87);
			else
				hex[i] = (char)((n % 16) + 55);
		}
		else
			hex[i] = (n % 16) + '0';
		n /= 16;
		i += 1;
	}
	if (x0 == 1)
	{
		hex[i] = 'x';
		hex[i + 1] = '0';
		i += 2;
	}
	if (isnegative == 1)
	{
		hex[i] = '-';
		i += 1;
	}
	hex[i] = '\0';
	cnt = ft_putstr(hex, 2, cnt);
	return (cnt);
}

static int	ft_purcentfound(int i, const char *str, va_list *arguments, int cnt)
{
	char	c;

	c = '\0';
	if (str[i + 1] == 'c')
	{
		c = va_arg(*arguments, int);
		write(1, &c, 1);
		cnt += 1;
	}
	else if (str[i + 1] == 's')
		cnt = ft_putstr(va_arg(*arguments, char *), 1, cnt);
	else if (str[i + 1] == 'p')
		cnt = ft_puthexa((unsigned long)(va_arg(*arguments, unsigned long)), 1, cnt, 1);
	else if (str[i + 1] == 'd')
		cnt = ft_putnbr(va_arg(*arguments, int), cnt);
	else if (str[i + 1] == 'i')
		cnt = ft_putnbr(va_arg(*arguments, int), cnt);
	else if (str[i + 1] == 'u')
		cnt = ft_putnbr(va_arg(*arguments, int), cnt);
	else if (str[i + 1] == 'x')
		cnt = ft_puthexa((unsigned long)va_arg(*arguments, int), 1, cnt, 0);
	else if (str[i + 1] == 'X')
		cnt = ft_puthexa((unsigned long)va_arg(*arguments, int), 2, cnt, 0);
	else if (str[i + 1] == '%')
	{
		write(1, "%", 1);
		cnt += 1;
	}
	return (cnt);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	arguments;
	int		cnt;

	i = 0;
	cnt = 0;
	if (!str)
		return (-1);
	va_start(arguments, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != 0)
		{
			cnt = ft_purcentfound(i, str, &arguments, cnt);
			i += 2;
		}
		else
		{
			write(1, &str[i++], 1);
			cnt += 1;
		}
	}
	va_end(arguments);
	return (cnt);
}

// int	main(void)
// {
// 	int	i;
// 	int	*ip;

// 	i = 0;
// 	ip = &i;
// 	ft_printf(":%d\n", ft_printf("caracteres: %c", 'c'));
// 	ft_printf(":%d\n", ft_printf("chaines de caracteres: %s", NULL));
// 	ft_printf(":%d\n", ft_printf("pointeurs: %p", ip));
// 	ft_printf(":%d\n", ft_printf("nombres decimaux: %d", 1));
// 	ft_printf(":%d\n", ft_printf("nombres entiers: %i", 1));
// 	ft_printf(":%d\n", ft_printf("nombres undefined: %u", (unsigned int)(1)));
// 	ft_printf(":%d\n", ft_printf("hexadecimaux minuscules: %x", -1027));
// 	ft_printf(":%d\n", ft_printf("hexadecimaux majuscules: %X", 27));
// 	ft_printf(":%d\n", ft_printf("pourcentages: %%"));
// 	ft_printf(":%d\n", ft_printf("plusieurs: %s %c %d", "ok !", 'c', 7));
// }
//
//
//
//
//
//