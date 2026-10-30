/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 14:02:55 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/30 16:29:03 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

static char	ft_converthex(char c, int class)
{
	char	base[17];
	int		i;
	int		h;

	base[16] = '\0';
	i = 0;
	if (c == 'F')
		return ('F');
	while (i <= 9)
	{
		base[i] = i + '0';
	}
	while (i <= 15)
	{
		if (class == 1)
			base[i] = (char)(i + 87);
		else
			base[i] = (char)(i + 55);
		i += 1;
	}
	i = 0;
	while (base[i] != c)
		i += 1;
	h = 16 - i;
	i = 0;
	while (h - 16 != -i)
		c = base[i++];
	return (c);
}

static int	ft_puthexa(int n, int class, int cnt)
{
	char	hex[9];
	char	finalhex[20];
	int		i;
	int		isnegative;
	int		j;

	i = 0;
	j = 0;
	isnegative = 0;
	finalhex[8] = '\0';
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
	hex[i] = '\0';
	if (isnegative == 0)
		return (ft_putstr(hex, 2, cnt));
	i = 0;
	while (i != 8)
		finalhex[i++] = 'F';
	i -= 1;
	while (hex[j] != '\0')
		finalhex[i--] = hex[j++];
	i = 7;
	finalhex[i] -= 1;
	while (i >= 0)
	{
		finalhex[i] = ft_converthex(finalhex[i], class);
		i -= 1;
	}
	return (ft_putstr(finalhex, 1, cnt));
}

static int	ft_putptr(unsigned long n, int cnt)
{
	char	hex[20];
	int		i;
	int		isnegative;

	i = 0;
	isnegative = 0;
	if (n == 0)
		return (ft_putstr("(nil)", 1, cnt));
	while (n > 0)
	{
		if (n % 16 >= 10)
			hex[i] = (char)((n % 16) + 87);
		else
			hex[i] = (n % 16) + '0';
		n /= 16;
		i += 1;
	}
	hex[i] = 'x';
	hex[i + 1] = '0';
	hex[i + 2] = '\0';
	return (ft_putstr(hex, 2, cnt));
}

static int	ft_purcentfound(int i, const char *str, va_list *arguments, int cnt)
{
	char	c;

	c = '\0';
	if (str[i + 1] == 'c')
	{
		c = va_arg(*arguments, int);
		cnt += write(1, &c, 1);
	}
	else if (str[i + 1] == 's')
		cnt = ft_putstr(va_arg(*arguments, char *), 1, cnt);
	else if (str[i + 1] == 'p')
		cnt = ft_putptr(va_arg(*arguments, unsigned long), cnt);
	else if (str[i + 1] == 'd')
		cnt = ft_putnbr(va_arg(*arguments, int), cnt);
	else if (str[i + 1] == 'i')
		cnt = ft_putnbr(va_arg(*arguments, int), cnt);
	else if (str[i + 1] == 'u')
		cnt = ft_putunsignednbr(va_arg(*arguments, unsigned int), cnt);
	else if (str[i + 1] == 'x')
		cnt = ft_puthexa(va_arg(*arguments, int), 1, cnt);
	else if (str[i + 1] == 'X')
		cnt = ft_puthexa(va_arg(*arguments, int), 2, cnt);
	else if (str[i + 1] == '%')
		cnt += write(1, "%", 1);
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
// 	ft_printf(":%d\n", ft_printf("nombres unsigned: %u", (unsigned int)(2147483648)));
// 	printf(":%d\n", printf("nombres unsigned: %u", (unsigned int)(2147483648)));
// 	ft_printf(":%d\n", ft_printf("hexadecimaux minuscules: %x", -100));
// 	ft_printf(":%d\n", ft_printf("hexadecimaux majuscules: %X", -100));
// 	printf("%X\n", -100);
// 	ft_printf(":%d\n", ft_printf("pourcentages: %%"));
// 	ft_printf(":%d\n", ft_printf("plusieurs: %s %c %d", "ok !", 'c', 7));
// }
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//