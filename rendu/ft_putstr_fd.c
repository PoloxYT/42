/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:45:39 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/20 15:06:29 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		write(fd, &s[i], 1);
		i += 1;
	}
}

// int	main(void)
// {
// 	printf("ft_putstr_fd(\"gg\", 1): [ca va ecrire \"gg\" dans la console]:\n");
// 	ft_putstr_fd("gg", 1);
// 	printf("\nft_putstr_fd(\"gg\", 0): [ca va ecrire \"gg\" en input]:\n");
// 	ft_putstr_fd("gg", 0);
// 	printf("\nft_putstr_fd(\"gg\", 2): [ca va ecrire \"gg\" en erreur]:\n");
// 	ft_putstr_fd("gg", 2);
// }
// 