/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 14:18:14 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/28 10:47:52 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
#include "libft.h"

// static void	ft_lstput_front(t_list **lst, t_list *new)
// {
// 	new->next = *lst;
// }

// static t_list	*ft_last(t_list *lst)
// {
// 	t_list	*node;

// 	node = lst;
// 	while (node->next != NULL)
// 		node = node->next;
// 	return (node);
// }

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	node = *lst;
	while (node->next != NULL)
		node = node->next;
	node->next = new;
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
// 	ft_lstput_front(&first, new);
// 	new2 = malloc(sizeof(t_list));
// 	printf("avant l'ajout:\n");
// 	printf("last adress found by function: %p\n", ft_last(first));
// 	printf("(adresse de new2): %p\n", new2);
// 	printf("(adresse de new): %p\n", new);
// 	printf("(adresse de first): %p\n", first);
// 	ft_lstadd_back(&new, new2);
// 	printf("apres l'ajout:\n");
// 	printf("last adress found by function: %p\n", ft_last(first));
// 	printf("(adresse de new2): %p\n", new2);
// 	printf("(adresse de new): %p\n", new);
// 	printf("(adresse de first): %p\n", first);
// }
//