/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 14:12:41 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/28 11:02:20 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
#include "libft.h"

// static void	ft_lstput_front(t_list **lst, t_list *new)
// {
// 	new->next = *lst;
// }

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;

	if (!lst)
		return (NULL);
	node = lst;
	while (node->next != NULL)
		node = node->next;
	return (node);
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
// 	printf("last adress found by function: %p\n", ft_lstlast(new2));
// 	printf("true last node adress: %p\n", first);
// }