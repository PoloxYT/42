/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:36:43 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/21 09:29:40 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	printf("ft_putchar_fd('g', 1): [ca va ecrire 'g' dans la console]:\n");
// 	ft_putchar_fd('g', 1);
// 	printf("\nft_putchar_fd('g', 0): [ca va ecrire 'g' en standard input]:\n");
// 	ft_putchar_fd('g', 0);
// 	printf("\nft_putchar_fd('g', 2): [ca va ecrire 'g' en erreur]:\n");
// 	ft_putchar_fd('g', 2);
// }