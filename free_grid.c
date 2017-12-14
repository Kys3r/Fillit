/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   free_shape.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mel-akio <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/06 13:03:28 by mel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/06 13:37:26 by mel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fillit.h"

void	free_grid(char **tab)
{
	int j;

	j = 0;
	while (tab[j])
	{
		tab[j] = NULL;
		free(tab[j]);
		j++;
	}
	tab = NULL;
	free(tab);
}
