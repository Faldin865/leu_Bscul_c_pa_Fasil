/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 13:54:40 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/20 19:08:36 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H

# define FT_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>

int			ft_strlen(char *str);
void		ft_putchar(char c);
void		ft_putstr(char *str);
int			ft_invalid(void);
char		**ft_split(char *str);

typedef	struct	s_map_param
{
	int		size_y;
	char	c_pot;
	char	obs;
	char	filler;
}				t_map_param;

#endif
