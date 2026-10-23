/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:22:48 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/23 14:01:58 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

static void	ft_lstaddfront(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

static void	ft_del(void *nodecontent)
{
	free(nodecontent);
	printf("free");
}

static void	ft_lstdeleteone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	del(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	**node;

	node = lst;
	while ((*node) != NULL)
	{
		ft_lstdeleteone(*node, del);
		node = &((*node)->next);
	}
}

int	main(void)
{
	t_list	*first;
	t_list	*new;
	t_list	*new2;

	first = malloc(sizeof(t_list));
	first->content = malloc(1 * sizeof(char));
	first->content = "g";
	first->next = NULL;
	new = malloc(sizeof(t_list));
	new->content = malloc(1 * sizeof(char));
	new->content = "a";
	new2 = malloc(sizeof(t_list));
	new2->content = malloc(1 * sizeof(char));
	new2->content = "c";
	ft_lstaddfront(&first, new);
	printf("new->next: %p\n", new->next);
	printf("first: %p\n", first);
	ft_lstaddfront(&new, new2);
	printf("new2->next: %p\n", new2->next);
	printf("new: %p\n", new);
	ft_lstclear(&new2, &ft_del);
	//si segfault: new2->content a bien ete free correctement:
	printf("new2 n'a pas ete free: %s\n", (char *)(new2->content));
}
//