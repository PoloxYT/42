/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:32:15 by pabaille          #+#    #+#             */
/*   Updated: 2026/11/02 09:16:29 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s, int sens, int cnt)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr("(null)", 1, cnt));
	if (sens == 1)
	{
		while (s[i] != 0)
		{
			cnt += write(1, &s[i], 1);
			i += 1;
		}
	}
	else if (sens == 2)
	{
		while (s[i] != 0)
			i += 1;
		i -= 1;
		while (i >= 0)
		{
			cnt += write(1, &s[i], 1);
			i -= 1;
		}
	}
	return (cnt);
}
//