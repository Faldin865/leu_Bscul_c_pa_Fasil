/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 19:30:09 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/20 20:28:59 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**init_board(void)
{
	char	**map;

	if (ouverture("exemple_file") == NULL)
		return (-1);
	map = ouverture("exemple_file");
	if (check_map(map, param) != 0)
		return (-1);
	return (map);
}
