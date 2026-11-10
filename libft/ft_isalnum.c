/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:11:13 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/23 09:49:08 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("ft_isalnum('a'): %d\n", ft_isalnum((int)'a'));
// 	printf("ft_isalnum('1'): %d\n", ft_isalnum((int)'1'));
// 	printf("ft_isalnum('#'): %d\n", ft_isalnum((int)'#'));
// 	printf("ft_isalnum(caractere nul): %d\n", ft_isalnum((int)'\0'));
// }