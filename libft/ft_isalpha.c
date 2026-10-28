/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:06:54 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/23 09:47:34 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("ft_isalpha('a'): %d\n", ft_isalpha((int)'a'));
// 	printf("ft_isalpha('1'): %d\n", ft_isalpha((int)'1'));
// 	printf("ft_isalpha(caractere nul): %d\n", ft_isalpha((int)'\0'));
// }