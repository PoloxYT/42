/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:11:13 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/20 11:19:26 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isalnum(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

// int	main(int argc, char *argv[])
// {
// 	printf("ft_isalnum('a'): %d\n", ft_isalnum('a'));
// 	printf("ft_isalnum('1'): %d\n", ft_isalnum('1'));
// 	printf("ft_isalnum('#'): %d\n", ft_isalnum('#'));
// 	printf("ft_isalnum('\0'): %d\n", ft_isalnum('\0'));
// }