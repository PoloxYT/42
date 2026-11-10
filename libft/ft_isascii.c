/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:13:42 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/23 09:48:43 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("ft_isascii('a'): %d\n", ft_isascii((int)'a'));
// 	printf("ft_isascii('1'): %d\n", ft_isascii((int)'1'));
// 	printf("ft_isascii((char)(129)): %d\n", ft_isascii(129));
// 	printf("ft_isascii((char)(-12)): %d\n", ft_isascii(-12));
// }