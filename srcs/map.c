/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 19:30:09 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/21 18:12:18 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**init_board(char *name, t_map_param *param)
{
	char		**map;

	if (ouverture(name) == NULL)
		return (NULL);
	map = ouverture(name);
	if (verif_lgn1(map[0], param) != 0)
		return (NULL);
	if (check_map(map, param) != 0)
		return (NULL);
	return (map);
}
