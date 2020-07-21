/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_complete.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 17:53:41 by tsannie           #+#    #+#             */
/*   Updated: 2020/07/21 18:00:44 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_complete(char **tab)
{
	int i;
	int e;

	i = 0;
	e = 0;
	while (tab[e])
	{
		while (tab[i])
		{
			ft_putstr(tab[e][i]);
			i++;
		}
		ft_putchar("\n");
		i = 0;
		e++;
	}
}
