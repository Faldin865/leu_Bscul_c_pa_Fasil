/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 15:33:35 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/20 17:04:50 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		check_char(char *map, char *param)
{
		int i;

		i = 0;
	while (map[i])
	{
		
		if (map[i] != param[1] || map[i] != param[2] || map[i] != '\n')
			return (-1);
		i++;
	}
	return (0);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int		check_size_str(char **map, char *param)
{
	int		i;
	int		n;

	i = 0;
	n = 1;
	while (i < ft_atoi(param[0]))
	{
		if (ft_strlen(map[i] != ft_srlen(map[n])))
			return (-1);
		n++;
		if (n - 1 == ft_atoi(parm[0]))
		{
			i++;
			n = 0;
		}
	}
	return (0);
}

int		check_map(char )
