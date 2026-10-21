/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:18:58 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/20 11:21:28 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isprint(char c)
{
	if ((c >= 0 && c <= 32) || (c == 127))
		return (0);
	return (1);
}

// int	main(void)
// {
// 	printf("ft_isprint('a'): %d\n", ft_isprint('a'));
// 	printf("ft_isprint('1'): %d\n", ft_isprint('1'));
// 	printf("ft_isprint((char)(3)): %d\n", ft_isprint((char)(3)));
// 	printf("ft_isprint((char)(127)): %d\n", ft_isprint((char)(127)));
// }