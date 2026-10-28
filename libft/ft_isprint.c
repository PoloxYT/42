/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:18:58 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/23 13:34:51 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("ft_isprint('a'): %d\n", ft_isprint((int)'a'));
// 	printf("ft_isprint('1'): %d\n", ft_isprint((int)'1'));
// 	printf("ft_isprint(3): %d\n", ft_isprint(3));
// 	printf("ft_isprint(127): %d\n", ft_isprint(127));
// }