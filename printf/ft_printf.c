/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 14:02:55 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/27 14:41:24 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthexa(int n, int class)
{
	char	hex[1000];
	int		i;

	i = 0;
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
		{
			hex[i] = (n % 16) + '0';
		}
		n /= 16;
		i += 1;
	}
	hex[i] = 'x';
	hex[i + 1] = '0';
	hex[i + 2] = '\0';
	ft_putstr(hex, 2);
}

static void	ft_purcentfound(int i, const char *str, va_list arguments)
{
	char	c;

	c = '\0';
	if (str[i + 1] == 'c')
	{
		c = va_arg(arguments, int);
		write(1, &c, 1);
	}
	else if (str[i + 1] == 's')
		ft_putstr(va_arg(arguments, char *), 1);
	// else if (str[i + 1] == 'p')
	// 	ft_puthexa((int)(va_arg(arguments, void *)), 2);
	else if (str[i + 1] == 'd')
		ft_putnbr(va_arg(arguments, int));
	else if (str[i + 1] == 'i')
		ft_putnbr(va_arg(arguments, int));
	else if (str[i + 1] == 'u')
		ft_putnbr(va_arg(arguments, int));
	else if (str[i + 1] == 'x')
		ft_puthexa(va_arg(arguments, int), 1);
	else if (str[i + 1] == 'X')
		ft_puthexa(va_arg(arguments, int), 2);
	else if (str[i + 1] == '%')
		write(1, "%", 1);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	arguments;

	i = 0;
	va_start(arguments, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			ft_purcentfound(i, str, arguments);
			i += 2;
		}
		write(1, &str[i], 1);
		i += 1;
	}
	va_end(arguments);
	return (1);
}

// int	main(void)
// {
// 	// int	i;
// 	// int	*ip;

// 	// i = 0;
// 	// ip = &i;
// 	ft_printf("test %s voila voila %% petit test testatif ! Chiffre %d en hexa: %x, (1027 en majuscule hexa juste pour la route: %X), "/*adresse de i: %p */"et hop petite lettre g pour la fin: %c\n", "! donc", 74, 74, 1027,/* ip,*/ 'g');
// }