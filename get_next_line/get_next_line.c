/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 09:26:31 by pabaille          #+#    #+#             */
/*   Updated: 2026/11/02 14:12:00 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>

char	*get_next_line(int fd)
{
	char		ligne[4096];
	char		*dest;
	int			i;
	int			j;
	static int	ligne_actuelle;

	i = 0;
	j = 0;
	while (j != ligne_actuelle)
	{
		while (read(fd, &ligne[0], 1) > 0)
		{
			if (ligne[0] == '\n')
				break ;
			i += 1;
		}
		i = 0;
		j += 1;
	}
	while (read(fd, ligne + i, 1) == 1)
	{
		if (ligne[i++] == '\n')
			break ;
	}
	ligne[i++] = '\0';
	dest = malloc(ft_strlen(ligne) * sizeof(char));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, ligne, i);
	ligne_actuelle += 1;
	return (dest);
}

// int	main(void)
// {
// 	int		i;
// 	char	*str;

// 	i = 0;
// 	str = malloc(2048 * sizeof(char));
// 	if (!str)
// 		return (0);
// 	while (i <= 3)
// 	{
// 		str = get_next_line(open("test", O_RDWR, S_IRUSR | S_IRGRP | S_IROTH));
// 		printf("%s", str);
// 		i += 1;
// 	}
// }

// S'il n'y a plus rien à lire ou si une erreur survient, elle doit renvoyer `NULL`.
// • Assurez-vous que votre fonction se comporte comme attendu, aussi bien lors de la lecture d'un fichier que lors de la lecture depuis l'entrée standard.
// • Notez que la ligne renvoyée doit inclure le caractère de fin de ligne `\n`, sauf si la fin du fichier est atteinte alors que celui-ci ne se termine pas par un `\n`.
// 7
// • Le comportement de `get_next_line()` est indéfini si le fichier associé au descripteur de fichier est modifié après le dernier appel, alors que `read()` n'a pas encore
//  atteint la fin du fichier. • get_next_line() présente également un comportement indéfini lors de la lecture d’un fichier binaire. Cependant, vous pouvez,
//  si vous le souhaitez, mettre en place une approche logique pour gérer ce cas.
// Votre fonction fonctionne-t-elle toujours si la valeur de BUFFER_SIZE est 9999 ? Si elle est égale à 1 ? À 10 000 000 ? Savez-vous pourquoi ?
// Essayez de lire le moins de données possible à chaque appel de get_next_line(). Si vous rencontrez un saut de ligne, vous devez renvoyer la ligne en cours.