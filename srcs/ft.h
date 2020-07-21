/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 13:54:40 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/21 15:37:10 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H

# define FT_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>

typedef	struct	s_map_param
{
	int		size_y;
	char	c_pot;
	char	obs;
	char	filler;
}				t_map_param;

typedef	struct	s_temp_sqr
{
	int		size_sqr;
	int		start_y;
	int		start_x;
	int		end_y;
	int		end_x;
}				t_temp_sqr;

typedef	struct	s_print_sqr
{
	int		size_sqr;
	int		start_y;
	int		start_x;
	int		end_y;
	int		end_x;
}				t_map_print;

int				ft_strlen(char *str);
void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_invalid(void);
char			**ft_split(char *str);
char			**ouverture(char *map_file);
int				check_map(char **map, t_map_param *param);
long			ft_atoi(char *str);

#endif
