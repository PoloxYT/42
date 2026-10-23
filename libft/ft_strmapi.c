/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 09:38:31 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/23 11:35:32 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>


// static char	ft_plusun(unsigned int index, char c)
// {
// 	index = 1;
// 	c += index;
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != 0)
		i += 1;
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		str[j] = f(i, s[i]);
		i += 1;
		j += 1;
	}
	str[j] = '\0';
	return (str);
}

// int	main(void)
// {
// 	printf("ft_strmapi(\"test\", &ft_plusun):\n");
// 	printf("%s\n", ft_strmapi("test", &ft_plusun));
// }