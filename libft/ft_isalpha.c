/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:06:54 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/20 11:19:23 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// int	main(int argc, char *argv[])
// {
// 	printf("ft_isalpha('a'): %d\n", ft_isalpha('a'));
// 	printf("ft_isalpha('1'): %d\n", ft_isalpha('1'));
// 	printf("ft_isalpha('\0'): %d\n", ft_isalpha('\0'));
// }