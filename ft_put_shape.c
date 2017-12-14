/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_put_shape.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mel-akio <mel-akio@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/29 14:10:08 by mel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/06 13:54:54 by mel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

static int			verrify(t_pos *fig, char **grid, t_pos pos)
{
	int				len;

	len = ft_strlen(grid[0]);
	if (pos.x + fig[0].x > len - 1 || pos.x + fig[1].x > len - 1
		|| pos.x + fig[2].x > len - 1 || pos.x + fig[3].x > len - 1)
		return (0);
	else if (pos.y + fig[0].y > len - 1 || pos.y + fig[1].y > len - 1
		|| pos.y + fig[2].y > len - 1 || pos.y + fig[3].y > len - 1)
		return (0);
	return (1);
}

static int			put_fig(t_pos *fig, char **grid, t_pos pos)
{
	int				len;

	len = ft_strlen(grid[0]);
	if (pos.x < len && pos.y < len)
		if (grid[pos.y + fig[0].y][pos.x + fig[0].x] == '.' &&
				grid[pos.y + fig[1].y][pos.x + fig[1].x] == '.' &&
				grid[pos.y + fig[2].y][pos.x + fig[2].x] == '.' &&
				grid[pos.y + fig[3].y][pos.x + fig[3].x] == '.')
		{
			grid[pos.y + fig[0].y][pos.x + fig[0].x] = fig[0].lettre;
			grid[pos.y + fig[1].y][pos.x + fig[1].x] = fig[0].lettre;
			grid[pos.y + fig[2].y][pos.x + fig[2].x] = fig[0].lettre;
			grid[pos.y + fig[3].y][pos.x + fig[3].x] = fig[0].lettre;
			return (1);
		}
	return (0);
}

int					ft_put_shape(char **grid, t_pos *coor, int current_pos)
{
	t_pos			grid_match;
	size_t			len;

	len = ft_strlen(grid[0]);
	grid_match.x = current_pos % len;
	grid_match.y = current_pos / len;
	if (verrify(coor, grid, grid_match))
		if (put_fig(coor, grid, grid_match))
			return (1);
	return (0);
}
