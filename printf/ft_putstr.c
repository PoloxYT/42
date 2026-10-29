/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:32:15 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/29 14:51:35 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s, int sens, int cnt)
{
	int	i;

	i = 0;
	if (sens == 1)
	{
		while (s[i] != 0)
		{
			write(1, &s[i], 1);
			i += 1;
			cnt += 1;
		}
	}
	else if (sens == 2)
	{
		if (s[i] == '\0')
			i += 1;
		while (s[i] != 0)
			i += 1;
		while (i >= 0)
		{
			write(1, &s[i], 1);
			i -= 1;
			cnt += 1;
		}
	}
	return (cnt);
}
//