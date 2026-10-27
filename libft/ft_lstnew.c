/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:17:05 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/22 11:37:54 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list			*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int	main(void)
// {
// 	t_liste	*liste;
// 	t_list	*element;
// 	int		test_value;
// 	int		*testeur;

// 	liste = malloc(sizeof(t_liste));
// 	element = malloc(sizeof(t_list));
// 	test_value = 7;
// 	testeur = NULL;
// 	element->content = 0;
// 	element->next = NULL;
// 	liste->first = element;
// 	testeur = ft_lstnew((&test_value))->content;
// 	printf("new->content: %d\n", *testeur);
// 	printf("new->next: %p\n", ft_lstnew((&test_value))->next);
// }
//