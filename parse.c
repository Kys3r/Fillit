/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   parse.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mel-akio <mel-akio@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 14:32:43 by mel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/05 15:37:05 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

char	**parse(char *str, size_t *index)
{
	char	**tab;
	size_t	i;

	i = 0;
	if (!(tab = ft_memalloc(sizeof(char*) * 5)))
		return (NULL);
	while (i != 4)
	{
		tab[i] = ft_strndup(&str[*index], 4);
		*index += 5;
		i++;
	}
	*index += 1;
	tab[i] = NULL;
	return (tab);
}
