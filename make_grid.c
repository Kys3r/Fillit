/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   make_grid.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mel-akio <mel-akio@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/29 13:09:21 by mel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/05 15:36:44 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

char	**make_grid(int size)
{
	char	**grid;
	int		i;
	int		j;

	i = 0;
	j = 0;
	grid = ft_memalloc(sizeof(char*) * size + 5);
	while (i != size)
	{
		grid[i] = ft_memalloc(sizeof(char) * size + 5);
		while (j != size)
		{
			grid[i][j] = '.';
			j++;
		}
		grid[i][j] = '\0';
		j = 0;
		i++;
	}
	grid[i] = NULL;
	return (grid);
}
