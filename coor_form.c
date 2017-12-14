/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   coor_form.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mel-akio <mel-akio@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/30 11:51:22 by mel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/06 13:56:58 by mel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

static t_pos	**decal_left(t_pos **pix, int size)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (i != size)
	{
		while (pix[i][0].y != 0 && pix[i][1].y != 0
			&& pix[i][2].y != 0 && pix[i][3].y != 0)
		{
			while (j != 4)
			{
				pix[i][j++].y--;
			}
			j = 0;
		}
		while (pix[i][0].x != 0)
		{
			while (j != 4)
				pix[i][j++].x--;
			j = 0;
		}
		i++;
	}
	return (pix);
}

t_pos			**coor_form(char ***str, int count)
{
	t_pos		**tab;
	t_coor_form	index;

	index.k = -1;
	tab = ft_memalloc(sizeof(t_pos*) * count + 1);
	while (str[++index.k])
	{
		index.j = -1;
		tab[index.k] = ft_memalloc(sizeof(t_pos) * 3);
		index.n = 0;
		while (++index.j != 4)
		{
			index.i = -1;
			while (++index.i != 4)
				if (str[index.k][index.j][index.i] == '#')
				{
					tab[index.k][index.n].x = index.i;
					tab[index.k][index.n].y = index.j;
					tab[index.k][index.n].lettre = 'A' + index.k;
					index.n++;
				}
		}
	}
	return (decal_left(tab, count));
}
