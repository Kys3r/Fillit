/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/04 19:54:56 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/04 19:54:57 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	char	*str;

	if (!(str = malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	ft_strcpy(str, s);
	return (str);
}
