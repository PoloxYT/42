/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:33:49 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/20 12:38:32 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	*ft_memchr(void *mem, int srch, size_t size)
{
	size_t			i;
	unsigned char	*m;

	i = 0;
	m = (unsigned char *)(mem);
	while (m[i] != 0 && i != size)
	{
		if (m[i] == srch)
			return (&m[i]);
		i += 1;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("ft_memchr(\"test\",'s',4): ");
// 	printf("%s\n", (char *)(ft_memchr("test", 's', 4)));
// 	printf("ft_memchr(\"test\",'t',4): ");
// 	printf("%s\n", (char *)(ft_memchr("test", 't', 4)));
// 	printf("ft_memchr(\"test\",'G',4): ");
// 	printf("%s\n", (char *)(ft_memchr("test", 'G', 4)));
// }