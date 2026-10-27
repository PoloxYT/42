/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:31:56 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/27 09:14:53 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stddef.h>

static void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!src || !dest)
		return (NULL);
	i = 0;
	d = (unsigned char *)(dest);
	s = (unsigned char *)(src);
	while (i < n)
	{
		d[i] = s[i];
		i += 1;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	i = (int)(size - 1);
	d = (unsigned char *)(dest);
	s = (unsigned char *)(src);
	if (dest < src)
	{
		ft_memcpy(dest, src, size);
		return (dest);
	}
	else
	{
		while (i >= 0)
		{
			d[i] = s[i];
			i -= 1;
		}
		return (d);
	}
}

// int	main(void)
// {
// 	char	src[] = "testabc";
// 	char	dest[] = "\0\0\0\0\0\0\0\0";

// 	printf("src = \"testabc\"\n");
// 	printf("dest = \"\"\n");
// 	printf("ft_memmove(dest, src, 7): ");
// 	printf("%s\n", (char *)(ft_memmove(dest, src, 7)));
// }
//