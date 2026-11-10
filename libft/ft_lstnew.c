/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:17:05 by pabaille          #+#    #+#             */
/*   Updated: 2026/10/28 11:39:19 by pabaille         ###   ########.fr       */
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
// 	t_list	*element;
// 	int		test_value;
// 	int		*testeur;

// 	element = malloc(sizeof(t_list));
// 	test_value = 7;
// 	testeur = NULL;
// 	element->content = 0;
// 	element->next = NULL;
// 	testeur = ft_lstnew((&test_value))->content;
// 	printf("new->content: %d\n", *testeur);
// 	printf("new->next: %p\n", ft_lstnew((&test_value))->next);
// }