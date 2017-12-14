/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_shape_is_ok.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mel-akio <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/06 14:04:10 by mel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/06 14:05:08 by mel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int				ft_shape_is_ok(int count, char ***tab)
{
	int			i;

	i = 0;
	while (i != count)
	{
		if (ft_valid_shape(tab[i]) == 0)
		{
			ft_putstr("error\n");
			return (0);
		}
		i++;
	}
	return (count);
}
