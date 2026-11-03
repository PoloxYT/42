/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 09:26:31 by pabaille          #+#    #+#             */
/*   Updated: 2026/11/03 12:52:45 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>

static void	*freeall(char *buf, char **rst, int isrstfree)
{
	free(buf);
	if (isrstfree)
	{
		free(*rst);
		*rst = NULL;
	}
	return (NULL);
}

static char	*rst_in_dest(int i, char *rst)
{
	char	*dest;

	dest = malloc((i + 2) * sizeof(char));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, rst, i + 1);
	dest[i + 1] = '\0';
	return (dest);
}

static int	ft_n(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i += 1;
	return (i);
}

static char	*ft_readline(char **buf, char **rst, int fd, int lus)
{
	char	*dest;

	dest = NULL;
	(*buf)[lus] = '\0';
	while (lus > 0)
	{
		(*buf)[lus] = '\0';
		*rst = ft_strjoin(*rst, *buf);
		if ((*rst)[ft_n(*rst)] == '\n')
		{
			dest = rst_in_dest(ft_n(*rst), *rst);
			*rst = ft_sub(*rst, ft_n(*rst) + 1, ft_len(*rst) - ft_n(*rst) + 1);
			return (dest);
		}
		lus = read(fd, *buf, BUFFER_SIZE);
	}
	if (*rst && lus == 0)
	{
		if ((*rst)[0] == '\0')
			return (freeall(NULL, rst, 1));
		dest = rst_in_dest(ft_len(*rst), *rst);
		freeall(NULL, rst, 1);
	}
	return (dest);
}

char	*get_next_line(int fd)
{
	char		*buf;
	char		*dest;
	int			i;
	static char	*rst;

	i = 0;
	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	dest = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (freeall(buf, &rst, 0));
	while (rst && rst[i] != '\n' && rst[i] != '\0')
		i += 1;
	if (rst && rst[i] == '\n')
	{
		dest = rst_in_dest(i, rst);
		rst = ft_sub(rst, i + 1, ft_len(rst) - (i + 1));
	}
	else
	{
		i = read(fd, buf, BUFFER_SIZE);
		if (i != -1)
			dest = ft_readline(&buf, &rst, fd, i);
	}
	freeall(buf, &rst, 0);
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

// • Assurez-vous que votre fonction se comporte comme attendu, aussi bien lors de la lecture d'un fichier que lors de la lecture depuis l'entrée standard.
// 7
// • Le comportement de `get_next_line()` est indéfini si le fichier associé au descripteur de fichier est modifié après le dernier appel, alors que `read()` n'a pas encore
//  atteint la fin du fichier. • get_next_line() présente également un comportement indéfini lors de la lecture d’un fichier binaire. Cependant, vous pouvez,
//  si vous le souhaitez, mettre en place une approche logique pour gérer ce cas.
// Votre fonction fonctionne-t-elle toujours si la valeur de BUFFER_SIZE est 9999 ? Si elle est égale à 1 ? À 10 000 000 ? Savez-vous pourquoi ?
// Essayez de lire le moins de données possible à chaque appel de get_next_line(). Si vous rencontrez un saut de ligne, vous devez renvoyer la ligne en cours.