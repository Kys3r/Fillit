/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mel-akio <mel-akio@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 15:16:31 by mel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/06 13:38:24 by mel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char		***tab;
	char		**grid;
	t_pos		**coor;
	t_main		var;
	t_backtrack	index;

	grid = NULL;
	var.i = 0;
	var.index = 0;
	var.str = ft_strfile(argv[1]);
	var.count = parsing_is_ok(argc, argv);
	if (var.count == 0)
		return (0);
	tab = ft_memalloc(sizeof(char**) * (var.count + 1) + 4);
	while (var.str[var.i])
		tab[var.index++] = parse(var.str, &var.i);
	if (!ft_shape_is_ok(var.count, tab))
		return (0);
	coor = coor_form(tab, var.count);
	index.n_shape = var.count;
	grid = resolve(grid, index, coor, var);
	ft_putdarray(grid);
	free_shape(tab, var.count);
	free_grid(grid);
	return (0);
}
