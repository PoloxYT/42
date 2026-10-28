/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 09:23:26 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/21 09:37:36 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>
#include "libft.h"

// static void	ft_putchar(unsigned int index, char *c)
// {
// 	index = 0;
// 	write(1, c, 1);
// 	write(1, "\n", 1);
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		f(i, &s[i]);
		i += 1;
	}
}

// int	main(void)
// {
// 	printf("ft_striteri(\"test\", &ft_putchar):\n");
// 	ft_striteri("test", &ft_putchar);
// }