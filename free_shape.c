/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   free_shape.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mel-akio <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/06 13:03:28 by mel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/06 13:17:27 by mel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fillit.h"

void	free_shape(char ***tab, int nb_form)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i != nb_form)
	{
		while (j != 4)
		{
			tab[i][j] = NULL;
			free(tab[i][j]);
			j++;
		}
		j = 0;
		tab[i] = NULL;
		free(tab[i]);
		i++;
	}
	tab = NULL;
	free(tab);
}
