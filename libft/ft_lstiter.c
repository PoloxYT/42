/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:57:46 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/22 11:46:18 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>
// #include <unistd.h>
#include "libft.h"

// static void	ft_lstadd_front(t_list **lst, t_list *new)
// {
// 	new->next = *lst;
// }

// static void	ft_print_cont(void *c)
// {
// 	write(1, c, 1);
// 	write(1, "\n", 1);
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	**node;

	node = &lst;
	while ((*node) != NULL)
	{
		f((*node)->content);
		node = &((*node)->next);
	}
}

// int	main(void)
// {
// 	t_liste	*liste;
// 	t_list	*first;
// 	t_list	*new;
// 	t_list	*new2;

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
// 	ft_lstadd_front(&first, new);
// 	ft_lstadd_front(&new, new2);
// 	printf("contenu de first: %s\n", (char *)(first->content));
// 	printf("contenu de new: %s\n", (char *)(new->content));
// 	printf("contenu de new2: %s\n", (char *)(new2->content));
// 	printf("fonction write va etre appliquee sur chaque:\n");
// 	ft_lstiter(new2, &ft_print_cont);
// 	printf("fonction appliquee !\n");
// }
//
//