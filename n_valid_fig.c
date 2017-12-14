/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   n_valid_fig.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mel-akio <mel-akio@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/27 10:41:41 by mel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/06 14:01:52 by mel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

static size_t	max_figures(size_t len_sample)
{
	size_t		i;
	size_t		nb_fig;

	i = 19;
	nb_fig = 0;
	while (i <= len_sample)
	{
		nb_fig++;
		if (nb_fig > 26)
			return (0);
		if (i == len_sample)
			return (nb_fig);
		i += 21;
	}
	return (0);
}

static size_t	check_newline(char *str)
{
	size_t		i;
	size_t		range;
	size_t		nl;

	i = 0;
	nl = 0;
	range = 4;
	while (*str)
	{
		while (i != range)
			i++;
		nl++;
		if (str[i++] == '\n')
			range += 5;
		else
			return (i);
		if (nl == 4 && str[i++] == '\n')
		{
			range += 1;
			nl = 0;
		}
		else if (nl == 4)
			return (i);
	}
	return (i);
}

static size_t	check_valid_char(char *str)
{
	size_t		i;
	size_t		range;
	size_t		nl;

	i = 0;
	nl = 0;
	range = 4;
	while (*str)
	{
		while (i != range && (str[i] == '.' || str[i] == '#'))
			i++;
		nl++;
		if (str[i++] == '\n')
			range += 5;
		else
			return (i);
		if (nl == 4 && str[i++] == '\n')
		{
			range += 1;
			nl = 0;
		}
		else if (nl == 4)
			return (i);
	}
	return (i);
}

size_t			n_valid_fig(char *str)
{
	size_t		nb_fig;
	size_t		hashtag;
	size_t		dot;

	hashtag = 0;
	dot = 0;
	if (str == NULL)
		return (0);
	if (check_newline(str) - 1 != ft_strlen(str))
		return (0);
	if (check_valid_char(str) - 1 != ft_strlen(str))
		return (0);
	nb_fig = max_figures(check_newline(str) - 2);
	if (nb_fig == 0)
		return (0);
	while (*str++)
	{
		if (*str == '.')
			dot++;
		else if (*str == '#')
			hashtag++;
	}
	if (dot + 2 > hashtag * 3 && hashtag != 0 && dot != 0)
		return (nb_fig);
	return (0);
}
