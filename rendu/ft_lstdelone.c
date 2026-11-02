/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 14:29:16 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/28 11:43:08 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

// static int	g_del_calls = 0;

// static void	del_content(void *content)
// {
// 	printf("  del() appele sur le contenu : \"%s\"\n", (char *)content);
// 	free(content);
// 	g_del_calls++;
// }

// static int	ft_size(t_list *lst)
// {
// 	int		i;
// 	t_list	*node;

// 	i = 0;
// 	node = lst;
// 	while (node != NULL)
// 	{
// 		node = node->next;
// 		i += 1;
// 	}
// 	return (i);
// }

// static void	print_list(t_list *lst)
// {
// 	printf("  liste :");
// 	printf(" (taille %d) :", ft_size(lst));
// 	while (lst)
// 	{
// 		printf(" [%s]", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("\n");
// }

// static void	ft_lstput_back(t_list **lst, t_list *new)
// {
// 	t_list	*node;

// 	if (*lst == NULL)
// 	{
// 		*lst = new;
// 		return ;
// 	}
// 	node = *lst;
// 	while (node->next != NULL)
// 		node = node->next;
// 	node->next = new;
// }

// static t_list	*ft_new(void *content)
// {
// 	t_list			*new;

// 	new = malloc(sizeof(t_list));
// 	if (!new)
// 		return (NULL);
// 	new->content = content;
// 	new->next = NULL;
// 	return (new);
// }

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*second;

// 	head = ft_new(strdup("premier"));
// 	ft_lstput_back(&head, ft_new(strdup("deuxieme")));
// 	ft_lstput_back(&head, ft_new(strdup("troisieme")));
// 	printf("Liste de depart :\n");
// 	print_list(head);
// 	printf("ft_lstdelone sur le premier noeud\n");
// 	second = head->next;
// 	ft_lstdelone(head, del_content);
// 	head = NULL;
// 	printf("  appels a del : %d (attendu : 1)\n", g_del_calls);
// }