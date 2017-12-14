/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_valid_shape.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/27 18:28:19 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/06 14:06:58 by mel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_check_diez(char **str, int line, int column)
{
	if ((line - 1) >= 0 && str[line - 1][column] == '#')
		return (1);
	else if ((line + 1) <= 3 && str[line + 1][column] == '#')
		return (1);
	else if ((column - 1) >= 0 && str[line][column - 1] == '#')
		return (1);
	else if ((column + 1) <= 3 && str[line][column + 1] == '#')
		return (1);
	return (0);
}

static int		ft_check_threesome(char **str, int line, int column)
{
	int			match;

	match = 0;
	if ((line - 1) >= 0 && str[line - 1][column] == '#')
		match += 1;
	if ((line + 1) <= 3 && str[line + 1][column] == '#')
		match += 1;
	if ((column - 1) >= 0 && str[line][column - 1] == '#')
		match += 1;
	if ((column + 1) <= 3 && str[line][column + 1] == '#')
		match += 1;
	if (match > 1)
		return (1);
	return (0);
}

int				ft_valid_shape(char **str)
{
	t_valid		val;

	val.line = 0;
	val.column = 0;
	val.threesome = 0;
	val.block = 0;
	while (val.line < 4)
	{
		if (str[val.line][val.column] == '#')
		{
			if (ft_check_diez(str, val.line, val.column) == 0)
				return (0);
			val.block++;
		}
		if (val.threesome == 0 && str[val.line][val.column] == '#')
			val.threesome = ft_check_threesome(str, val.line, val.column);
		val.column++;
		if (val.column == 4)
		{
			val.column = 0;
			val.line++;
		}
	}
	return (val.threesome == 0 || val.block != 4) ? 0 : 1;
}
