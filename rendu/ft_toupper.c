/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:10:44 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/20 12:14:05 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

// int	main(void)
// {
// 	printf("ft_toupper('a'): %c\n", (char)(ft_toupper('a')));
// 	printf("ft_toupper('C'): %c\n", (char)(ft_toupper('C')));
// 	printf("ft_toupper('7'): %c\n", (char)(ft_toupper('7')));
// }