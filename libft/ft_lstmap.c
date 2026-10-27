/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 11:22:31 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/27 14:23:53 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
#include "libft.h"
#include <stdlib.h>

// static void	ft_del(void *nodecontent)
// {
// 	free(nodecontent);
// }

// static void	*ft_toa_content(void *content)
// {
// 	content = "a";
// 	return ("a");
// }

static t_list	*ft_newnode(void *content)
{
	t_list			*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

static int	ft_size(t_list *lst)
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

static void	ft_listclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*stock;

	node = *lst;
	stock = NULL;
	while (node != NULL)
	{
		stock = node->next;
		del(node->content);
		free(node);
		node = stock;
	}
	*lst = NULL;
}

static void	ft_lstput_back(t_list **lst, t_list *new)
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

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newobj;
	int		lstsize;

	if (!lst || !f || !del)
		return (NULL);
	lstsize = ft_size(lst);
	newobj = NULL;
	newlist = malloc(lstsize * sizeof(t_list *));
	if (!newlist)
		return (NULL);
	newlist = NULL;
	while (lst != NULL)
	{
		newobj = ft_newnode(f(lst->content));
		if (!newobj)
		{
			ft_listclear(&newlist, del);
			return (NULL);
		}
		ft_lstput_back(&newlist, newobj);
		lst = lst->next;
	}
	return (newlist);
}

// static void	ft_lstnew_front(t_list **lst, t_list *new)
// {
// 	new->next = *lst;
// 	*lst = new;
// }

// int	main(void)
// {
// 	t_liste	*liste;
// 	t_list	*first;
// 	t_list	*new;
// 	t_list	*new2;
// 	t_list	**node;
// 	t_list	*nodee;

// 	liste = malloc(sizeof(t_liste));
// 	first = malloc(sizeof(t_list));
// 	first->content = malloc(1 * sizeof(char));
// 	first->content = "g";
// 	first->next = NULL;
// 	liste->first = first;
// 	new = malloc(sizeof(t_list));
// 	new->content = malloc(1 * sizeof(char));
// 	new->content = "a";
// 	new2 = malloc(sizeof(t_list));
// 	new2->content = malloc(1 * sizeof(char));
// 	new2->content = "c";
// 	ft_lstnew_front(&first, new);
// 	ft_lstnew_front(&new, new2);
// 	printf("contenu de first: %s\n", (char *)(first->content));
// 	printf("contenu de new: %s\n", (char *)(new->content));
// 	printf("contenu de new2: %s\n", (char *)(new2->content));
// 	nodee = ft_lstmap(new2, &ft_toa_content, &ft_del);
// 	node = &nodee;
// 	printf("fonction appliquee ! tous les contenus valent 'a':\n");
// 	printf("print de la newlist:\n");
// 	while ((*node) != NULL)
// 	{
// 		write(1, (*node)->content, 1);
// 		write(1, "\n", 1);
// 		node = &((*node)->next);
// 	}
// }