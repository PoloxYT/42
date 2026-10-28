/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 14:00:44 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/28 11:07:07 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
#include "libft.h"

// static void	ft_lstput_front(t_list **lst, t_list *new)
// {
// 	new->next = *lst;
// }

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*node;

	i = 0;
	node = lst;
	while (node != NULL)
	{
		node = node->next;
		i += 1;
	}
	return (i);
}

// int	main(void)
// {
// 	t_list	*first;
// 	t_list	*new;
// 	t_list	*new2;

// 	first = malloc(sizeof(t_list));
// 	first->content = 0;
// 	first->next = NULL;
// 	new = malloc(sizeof(t_list));
// 	new2 = malloc(sizeof(t_list));
// 	ft_lstput_front(&first, new);
// 	ft_lstput_front(&new, new2);
// 	printf("size: %d\n", ft_lstsize(new2));
// }
//