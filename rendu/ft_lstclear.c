/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:22:48 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/28 11:37:18 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"
#include <stdlib.h>

static void	ft_lstdeleteone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*stock;

	node = *lst;
	stock = NULL;
	while (node != NULL)
	{
		stock = node->next;
		ft_lstdeleteone(node, del);
		node = stock;
	}
	*lst = NULL;
}

// static int	g_del_calls = 0;

// static void	del_content(void *content)
// {
// 	printf("  del() appele sur le contenu : \"%s\"\n", (char *)content);
// 	free(content);
// 	g_del_calls++;
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

// static void	print_list(t_list *lst)
// {
// 	printf("  liste :");
// 	if (!lst)
// 		printf(" (vide)");
// 	while (lst)
// 	{
// 		printf(" [%s]", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("\n");
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

// int	main(void)
// {
// 	t_list	*lst;

// 	lst = ft_new(strdup("un"));
// 	ft_lstput_back(&lst, ft_new(strdup("deux")));
// 	ft_lstput_back(&lst, ft_new(strdup("trois")));
// 	ft_lstput_back(&lst, ft_new(strdup("quatre")));
// 	printf("Liste de depart (taille %d) :\n", ft_size(lst));
// 	print_list(lst);

// 	printf("ft_lstclear sur toute la liste\n");
// 	ft_lstclear(&lst, del_content);
// 	printf("  appels a del : %d (attendu : 4)\n", g_del_calls);
// 	print_list(lst);
// }
//
//