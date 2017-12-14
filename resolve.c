/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   resolve.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mel-akio <mel-akio@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/04 19:19:14 by mel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/06 13:31:28 by mel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

char	**resolve(char **grid, t_backtrack index, t_pos **coor, t_main var)
{
	int i;

	i = 0;
	while (1)
	{
		index.position = 0;
		index.index_shape = 0;
		grid = make_grid(ft_next_sqrt(var.count * 4));
		index.pos_max = ft_strlen(grid[0]) * ft_strlen(grid[0]);
		if (ft_backtrack(grid, coor, index, 0))
			break ;
		ft_strdel(grid);
		var.count++;
	}
	while (coor[i])
	{
		coor[i] = NULL;
		free(coor[i]);
		i++;
	}
	coor = NULL;
	free(coor);
	return (grid);
}
