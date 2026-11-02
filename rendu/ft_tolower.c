/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:14:35 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/23 09:39:11 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

// int	main(void)
// {
// 	printf("ft_tolower('a'): %c\n", (char)(ft_tolower('a')));
// 	printf("ft_tolower('C'): %c\n", (char)(ft_tolower('C')));
// 	printf("ft_tolower('7'): %c\n", (char)(ft_tolower('7')));
// }