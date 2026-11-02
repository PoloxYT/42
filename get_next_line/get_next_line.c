/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 09:26:31 by pabaille          #+#    #+#             */
/*   Updated: 2026/11/02 15:39:31 by pabaille         ###   ########.fr       */
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
	char		*buf;
	char		*dest;
	int			i;
	int			lus;
	static char	*texte_restant;

	i = 0;
	lus = 0;
	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);

	lus = read(fd, buf, BUFFER_SIZE);
	buf[lus] = '\0';
	while (lus > 0)
	{
		texte_restant = ft_strjoin(texte_restant, buf);
		while (texte_restant[i] != '\n' && texte_restant[i] != '\0')
			i += 1;
		if (texte_restant[i] == '\n')
		{
			texte_restant = ft_substr(texte_restant, i + 1, ft_strlen(buf) - i);
			break ;
		}
		lus = read(fd, buf, BUFFER_SIZE);
		buf[lus] = '\0';
	}
	dest = malloc((i + 2) * sizeof(char));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, texte_restant, i + 2);
	dest[i + 1] = '\0';
	free(buf);
	return (dest);
}

// int	main(void)
// {
// 	int		i;
// 	char	*str;
// 	int		fd;

// 	i = 0;
// 	str = malloc(2048 * sizeof(char));
// 	if (!str)
// 		return (0);
// 	fd = open("test", O_RDWR, S_IRUSR | S_IRGRP | S_IROTH);
// 	while (i <= 3)
// 	{
// 		str = get_next_line(fd);
// 		printf("%s", str);
// 		i += 1;
// 	}
// 	free(str);
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