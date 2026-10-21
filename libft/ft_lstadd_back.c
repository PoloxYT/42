/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 14:18:14 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/21 14:28:03 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
#include "libft.h"

static void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
}

static t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;

	node = lst;
	while (node->next != NULL)
		node = node->next;
	return (node);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	node = *lst;
	while (node->next != NULL)
		node = node->next;
	node->next = new;
}

// int	main(void)
// {
// 	t_liste	*liste;
// 	t_list	*first;
// 	t_list	*new;
// 	t_list	*new2;

// 	liste = malloc(sizeof(t_liste));
// 	first = malloc(sizeof(t_list));
// 	first->content = 0;
// 	first->next = NULL;
// 	liste->first = first;
// 	new = malloc(sizeof(t_list));
// 	ft_lstadd_front(&first, new);
// 	new2 = malloc(sizeof(t_list));
// 	printf("avant l'ajout:\n");
// 	printf("last adress found by function: %p\n", ft_lstlast(first));
// 	printf("(adresse de new2): %p\n", new2);
// 	printf("(adresse de first): %p\n", first);
// 	ft_lstadd_back(&new, new2);
// 	printf("apres l'ajout:\n");
// 	printf("last adress found by function: %p\n", ft_lstlast(first));
// 	printf("(adresse de new2): %p\n", new2);
// 	printf("(adresse de new2): %p\n", new2);
// }
//