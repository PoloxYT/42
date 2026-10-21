/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:13:42 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/20 11:20:03 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isascii(char c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("ft_isascii('a'): %d\n", ft_isascii('a'));
// 	printf("ft_isascii('1'): %d\n", ft_isascii('1'));
// 	printf("ft_isascii((char)(129)): %d\n", ft_isascii((char)(129)));
// 	printf("ft_isascii((char)(-12)): %d\n", ft_isascii((char)(-12)));
// }