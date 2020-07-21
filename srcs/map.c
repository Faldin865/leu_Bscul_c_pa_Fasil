/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 19:30:09 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/21 16:05:51 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**init_board(char *name, t_map_param *param)
{
	char		**map;

	if (ouverture(name) == NULL)
		return (NULL);
	map = ouverture(name);
	if (verif_lgn1(map[0], param))
	if (check_map(map, param) != 0)
		return (NULL);
	return (map);
}
