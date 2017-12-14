/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   usage.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mel-akio <mel-akio@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/27 13:37:56 by mel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/05 15:37:23 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		usage_ko(int argc)
{
	if (argc != 2)
	{
		ft_putstr("usage: ./fillit source_file\n");
		return (1);
	}
	return (0);
}
