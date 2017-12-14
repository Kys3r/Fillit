/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/04 19:56:17 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/06 14:05:35 by mel-akio    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_FILLIT_H
# define FT_FILLIT_H

# include <fcntl.h>
# include "libft/libft.h"
# define BUFF_SIZE 547

typedef struct	s_valid
{
	int			line;
	int			column;
	int			threesome;
	int			block;
}				t_valid;

typedef struct	s_pos
{
	int			x;
	int			y;
	char		lettre;
}				t_pos;

typedef	struct	s_main
{
	size_t	i;
	size_t	count;
	size_t	index;
	char	*str;
}				t_main;

typedef	struct	s_backtrack
{
	int	position;
	int pos_max;
	int index_shape;
	int n_shape;
}				t_backtrack;

typedef	struct	s_coor_form
{
	int i;
	int j;
	int k;
	int n;
}				t_coor_form;

char			**parse(char *str, size_t *index);
char			*ft_strfile(char *filetoread);
size_t			n_valid_fig(char *str);
int				usage_ko(int argc);
char			**make_grid(int size);
void			ft_putdarray(char **str);
char			**make_grid(int size);
int				ft_valid_shape(char **str);
int				ft_shape_is_ok(int count, char ***tab);
int				ft_put_shape(char **grid, t_pos *coor, int current_pos);
t_pos			**coor_form(char ***str, int count);
size_t			parsing_is_ok(int argc, char **argv);
int				ft_backtrack(char **grid, t_pos **tab, t_backtrack index,
	int index_shape);
int				ft_n_shape(t_pos **tab);
int				remove_fig(t_pos *fig, char **grid, int	position);
char			**resolve(char **grid, t_backtrack index, t_pos **coor,
	t_main var);
void			free_shape(char ***tab, int nb_form);
void			free_grid(char **grid);

#endif
