/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:09:50 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/20 11:19:51 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int	main(int argc, char *argv[])
// {
// 	printf("ft_isdigit('a'): %d\n", ft_isdigit('a'));
// 	printf("ft_isdigit('1'): %d\n", ft_isdigit('1'));
// 	printf("ft_isdigit('\0'): %d\n", ft_isdigit('\0'));
// }