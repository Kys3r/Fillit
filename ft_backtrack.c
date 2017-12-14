/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_backtrack.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/30 13:44:42 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/05 12:36:30 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int	ft_backtrack(char **grid, t_pos **tab, t_backtrack index, int index_shape)
{
	int position;

	position = index.position;
	if (index_shape >= index.n_shape)
		return (1);
	while (position < index.pos_max)
	{
		if (ft_put_shape(grid, tab[index_shape], position))
		{
			if (ft_backtrack(grid, tab, index, (index_shape + 1)))
				return (1);
			remove_fig(tab[index_shape], grid, position);
		}
		position++;
	}
	return (0);
}
