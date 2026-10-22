/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:21:58 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/21 09:42:10 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i += 1;
	return (i);
}

// int	main(void)
// {
// 	printf("ft_strlen(\"test\"): %d\n", ft_strlen("test"));
// 	printf("ft_strlen(\"test1\"): %d\n", ft_strlen("test1"));
// 	printf("ft_strlen(\"\"): %d\n", ft_strlen(""));
// }