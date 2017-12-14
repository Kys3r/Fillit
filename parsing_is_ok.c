/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   parsing_is_ok.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mel-akio <mel-akio@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 15:16:31 by mel-akio     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/05 15:37:10 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

size_t	parsing_is_ok(int argc, char **argv)
{
	size_t	count;
	char	*string;

	if (usage_ko(argc))
		return (0);
	string = ft_strfile(argv[1]);
	if (string == NULL)
	{
		ft_putstr("error\n");
		return (0);
	}
	count = n_valid_fig(string);
	if (count == 0)
	{
		ft_putstr("error\n");
		return (0);
	}
	return (count);
}
