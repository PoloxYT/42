/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:55:41 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/22 11:03:13 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		write(fd, &s[i], 1);
		i += 1;
	}
	write(fd, "\n", 1);
}

// int	main(void)
// {
// 	printf("ft_putendl_fd(\"gg\", 1): [va ecrire\"gg\"+ saut en console]:\n");
// 	ft_putendl_fd("gg", 1);
// 	printf("ft_putendl_fd(\"gg\", 0): [va ecrire\"gg\"+ saut en input]:\n");
// 	ft_putendl_fd("gg", 0);
// 	printf("ft_putendl_fd(\"gg\", 2): [va ecrire\"gg\"+ saut en erreur]:\n");
// 	ft_putendl_fd("gg", 2);
// }
