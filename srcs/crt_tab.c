/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crt_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 17:47:34 by tsannie           #+#    #+#             */
/*   Updated: 2020/07/20 19:41:16 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		nb_char_file(char *map_file)
{
	int		fd;
	char	buf;
	int		i;

	i = 0;
	fd = open(map_file, O_RDONLY);
	if (fd == -1)
		return (0);
	while ((read(fd, &buf, 1)))
		i++;
	close(fd);
	return (i);
}

char	*imp(char *res, char *map_file)
{
	int		fd;
	char	buf;
	int		i;

	i = 0;
	fd = open(map_file, O_RDONLY);
	if (fd == -1)
		return (0);
	while ((read(fd, &buf, 1)))
	{
		res[i] = buf;
		i++;
	}
	res[i] = '\0';
	close(fd);
	return (res);
}

char	**ouverture(char *map_file)
{
	int		i;
	char	*str;
	char	**res;

	i = 0;
	if (!(str = malloc(sizeof(char) * nb_char_file(map_file) + 1)))
		return (NULL);
	imp(str, map_file);
	res = ft_split(str);
	if (res == '\0')
		return (NULL);
	free(str);
	return (res);
}
