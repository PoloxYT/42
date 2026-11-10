/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:09:50 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/23 09:52:46 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("ft_isdigit('a'): %d\n", ft_isdigit('a'));
// 	printf("ft_isdigit('1'): %d\n", ft_isdigit('1'));
// 	printf("ft_isdigit(caractere nul): %d\n", ft_isdigit('\0'));
// }