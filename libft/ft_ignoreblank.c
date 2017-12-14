/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ignoreblank.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/04 19:54:02 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/04 19:54:04 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_ignoreblank(char const *s)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		if (s[i] != 32 && s[i] != '\n' && s[i] != '\t')
			j++;
		i++;
	}
	return (j);
}
