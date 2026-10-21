/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:45:30 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/20 11:48:36 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!src || !dest)
		return (NULL);
	i = 0;
	d = (unsigned char *)(dest);
	s = (unsigned char *)(src);
	while (s[i] != 0 && i < n)
	{
		d[i] = s[i];
		i += 1;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "testabc";
// 	char	dest[] = "\0\0\0\0\0\0\0\0";

// 	printf("src = \"testabc\"\n");
// 	printf("dest = \"\"\n");
// 	printf("ft_memcpy(dest, src, 7): %s\n", (char *)(ft_memcpy(dest, src, 7)));
// }