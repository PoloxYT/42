/* Test de ft_lstdelone - NE PAS mettre ce fichier dans le depot rendu.
** Compilation (depuis le dossier libft) :
**   cc -Wall -Wextra -Werror main_lstdelone.c libft.a -I. -o test_lstdelone
** Avec verification memoire :
**   cc -g -fsanitize=address,undefined main_lstdelone.c ft_*.c -I. -o test_lstdelone
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

static int	g_del_calls = 0;

static void	del_content(void *content)
{
	printf("  del() appele sur le contenu : \"%s\"\n", (char *)content);
	free(content);
	g_del_calls++;
}

static void	print_list(t_list *lst)
{
	printf("  liste :");
	printf(" (taille %d) :", ft_lstsize(lst));
	while (lst)
	{
		printf(" [%s]", (char *)lst->content);
		lst = lst->next;
	}
	printf("\n");
}

int	main(void)
{
	t_list	*head;
	t_list	*second;

	head = ft_lstnew(strdup("premier"));
	ft_lstadd_back(&head, ft_lstnew(strdup("deuxieme")));
	ft_lstadd_back(&head, ft_lstnew(strdup("troisieme")));
	printf("Liste de depart :\n");
	print_list(head);

	printf("\n1) ft_lstdelone sur le premier noeud\n");
	second = head->next;
	ft_lstdelone(head, del_content);
	head = NULL;
	printf("  appels a del : %d (attendu : 1)\n", g_del_calls);

	printf("\n2) Le noeud suivant ne doit PAS avoir ete libere :\n");
	print_list(second);
	printf("  (si ca affiche deuxieme -> troisieme, c'est correct)\n");

	printf("\n3) Nettoyage du reste avec ft_lstdelone, noeud par noeud\n");
	while (second)
	{
		t_list	*next;

		next = second->next;
		ft_lstdelone(second, del_content);
		second = next;
	}
	printf("  appels a del au total : %d (attendu : 3)\n", g_del_calls);
	return (g_del_calls == 3 ? 0 : 1);
}
