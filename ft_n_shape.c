/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_n_shape.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 19:40:05 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/05 12:36:26 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		ft_n_shape(t_pos **tab)
{
	int i;

	i = 0;
	while (tab[i] != NULL)
		i++;
	return (i);
}