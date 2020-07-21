/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 19:30:09 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/21 10:38:44 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**init_board(void)
{
	char	**map;

	if (ouverture(argv[i]) == NULL)
		return (NULL);
	map = ouverture(argv[i]);
	if (check_map(map, param) != 0)
		return (NULL;
	return (map);
}
