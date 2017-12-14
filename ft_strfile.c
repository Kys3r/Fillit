/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strfile.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 14:33:24 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/05 15:36:29 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_strfile(char *filetoread)
{
	int		fd;
	char	*str;
	char	buf;
	int		i;

	i = 0;
	str = ft_memalloc(BUFF_SIZE);
	fd = open(filetoread, O_RDONLY);
	if (fd == -1)
		return (NULL);
	while (read(fd, &buf, 1))
		str[i++] = buf;
	str[i] = '\0';
	close(fd);
	return (str);
}
