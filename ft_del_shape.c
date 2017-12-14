/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_del_shape.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 18:59:49 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/06 13:51:04 by mel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int			remove_fig(t_pos *fig, char **grid, int position)
{
	int		len;
	t_pos	pos;

	len = ft_strlen(grid[0]);
	pos.x = position % len;
	pos.y = position / len;
	if (pos.x < len && pos.y < len)
		if (grid[pos.y + fig[0].y][pos.x + fig[0].x] == fig[0].lettre &&
				grid[pos.y + fig[1].y][pos.x + fig[1].x] == fig[0].lettre &&
				grid[pos.y + fig[2].y][pos.x + fig[2].x] == fig[0].lettre &&
				grid[pos.y + fig[3].y][pos.x + fig[3].x] == fig[0].lettre)
		{
			grid[pos.y + fig[0].y][pos.x + fig[0].x] = '.';
			grid[pos.y + fig[1].y][pos.x + fig[1].x] = '.';
			grid[pos.y + fig[2].y][pos.x + fig[2].x] = '.';
			grid[pos.y + fig[3].y][pos.x + fig[3].x] = '.';
			return (1);
		}
	return (0);
}
