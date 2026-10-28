/* Test de ft_lstclear - NE PAS mettre ce fichier dans le depot rendu.
** Compilation (depuis le dossier libft) :
**   cc -Wall -Wextra -Werror main_lstclear.c libft.a -I. -o test_lstclear
** Avec verification memoire :
**   cc -g -fsanitize=address,undefined main_lstclear.c ft_*.c -I. -o test_lstclear
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
	if (!lst)
		printf(" (vide)");
	while (lst)
	{
		printf(" [%s]", (char *)lst->content);
		lst = lst->next;
	}
	printf("\n");
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew(strdup("un"));
	ft_lstadd_back(&lst, ft_lstnew(strdup("deux")));
	ft_lstadd_back(&lst, ft_lstnew(strdup("trois")));
	ft_lstadd_back(&lst, ft_lstnew(strdup("quatre")));
	printf("Liste de depart (taille %d) :\n", ft_lstsize(lst));
	print_list(lst);

	printf("\n1) ft_lstclear sur toute la liste\n");
	ft_lstclear(&lst, del_content);
	printf("  appels a del : %d (attendu : 4)\n", g_del_calls);
	printf("  pointeur de liste remis a NULL : %s\n",
		lst == NULL ? "oui (correct)" : "NON (erreur)");
	print_list(lst);

	printf("\n2) ft_lstclear sur une liste deja vide (ne doit pas planter)\n");
	ft_lstclear(&lst, del_content);
	printf("  appels a del : %d (toujours 4 attendu)\n", g_del_calls);

	printf("\n3) ft_lstclear sur une liste d'un seul noeud\n");
	lst = ft_lstnew(strdup("seul"));
	ft_lstclear(&lst, del_content);
	printf("  appels a del : %d (attendu : 5), liste == NULL : %s\n",
		g_del_calls, lst == NULL ? "oui" : "non");
	return (g_del_calls == 5 && lst == NULL ? 0 : 1);
}
