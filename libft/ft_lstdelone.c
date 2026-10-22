/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 14:29:16 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/22 15:40:13 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"
#include <stdlib.h>

// static void	ft_lstadd_front(t_list **lst, t_list *new)
// {
// 	new->next = *lst;
// }

// static void	ft_del(void *nodecontent)
// {
// 	free(nodecontent);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(&lst->content);
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
// 	new2 = malloc(sizeof(t_list));
// 	new2->content = malloc(1 * sizeof(char));
// 	new2->content = "c";
// 	ft_lstadd_front(&first, new);
// 	ft_lstadd_front(&new, new2);
// 	printf("content de new2: %s\n", (char *)(new2->content));
// 	ft_lstdelone(new2, &ft_del);
// 	//si segfault: new2->content a bien ete free correctement:
// 	printf("new2 n'a pas ete free: %s\n", (char *)(new2->content));
// }