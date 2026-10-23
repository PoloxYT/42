/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 11:22:31 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/23 14:49:25 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

static t_list	*ft_lstnew(void *content)
{
	t_list			*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

static void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
}

static int	ft_lstsize(t_list *lst)
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

static void	*ft_toa_content(void *content)
{
	content = "a";
	return ("a");
}

// static void	ft_del(void *nodecontent)
// {
// 	free(nodecontent);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *)/*, void (*del)(void *)*/)
{
	t_list	*newlist;
	t_list	**node;
	int		lstsize;
	int		i;

	i = 0;
	node = &lst;
	lstsize = ft_lstsize(lst);
	newlist = malloc(sizeof(t_list *));
	if (!newlist)
		return (NULL);
	while (i < lstsize)
	{
		ft_lstadd_front(&newlist, ft_lstnew(newlist));
		i += 1;
	}
	while ((*node) != NULL)
	{
		newlist->content = f((*node)->content);
		newlist->next = (*node)->next;
		newlist = newlist->next;
		(*node) = (*node)->next;
	}
	return (newlist);
}

static void	ft_print_cont(void *c)
{
	write(1, c, 1);
	write(1, "a\n", 1);
}



static void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	**node;

	node = &lst;
	while ((*node) != NULL)
	{
		f((*node)->content);
		node = &((*node)->next);
	}
}

int	main(void)
{
	t_liste	*liste;
	t_list	*first;
	t_list	*new;
	t_list	*new2;

	liste = malloc(sizeof(t_liste));
	first = malloc(sizeof(t_list));
	first->content = malloc(1 * sizeof(char));
	first->content = "g";
	first->next = NULL;
	liste->first = first;
	new = malloc(sizeof(t_list));
	new->content = malloc(1 * sizeof(char));
	new->content = "a";
	new2 = malloc(sizeof(t_list));
	new2->content = malloc(1 * sizeof(char));
	new2->content = "c";
	ft_lstadd_front(&first, new);
	ft_lstadd_front(&new, new2);
	printf("contenu de first: %s\n", (char *)(first->content));
	printf("contenu de new: %s\n", (char *)(new->content));
	printf("contenu de new2: %s\n", (char *)(new2->content));
	printf("fonction va etre appliquee:\n");
	printf("fonction appliquee !\n");
	printf("print de la newlist:\n");
	ft_lstiter(ft_lstmap(new2, &ft_toa_content), &ft_print_cont);
}
//
//
//