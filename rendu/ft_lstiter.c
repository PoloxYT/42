/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:57:46 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/28 11:00:26 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>
// #include <unistd.h>
#include "libft.h"

// void	ft_lstput_front(t_list **lst, t_list *new)
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
// 	t_list	*first;
// 	t_list	*new;
// 	t_list	*new2;

// 	first = malloc(sizeof(t_list));
// 	first->content = malloc(1 * sizeof(char));
// 	first->content = "g";
// 	first->next = NULL;
// 	new = malloc(sizeof(t_list));
// 	new->content = malloc(1 * sizeof(char));
// 	new->content = "a";
// 	new2 = malloc(sizeof(t_list));
// 	new2->content = malloc(1 * sizeof(char));
// 	new2->content = "c";
// 	ft_lstput_front(&first, new);
// 	ft_lstput_front(&new, new2);
// 	printf("contenu de new2: %s\n", (char *)(new2->content));
// 	printf("contenu de new: %s\n", (char *)(new->content));
// 	printf("contenu de first: %s\n", (char *)(first->content));
// 	printf("fonction write va etre appliquee sur chaque:\n");
// 	ft_lstiter(new2, &ft_print_cont);
// 	printf("fonction appliquee !\n");
// }
//
//
//
//
//