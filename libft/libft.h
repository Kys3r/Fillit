/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/04 19:31:41 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/04 20:14:19 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _LIBFT_H
# define _LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *s, int c, size_t n);
void				*ft_bzero(void *s, size_t n);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strdup(const char *s);
char				*ft_strndup(const char *s, size_t n);
size_t				ft_strlen(const char *s);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
size_t				ft_ignoreblank(char const *s);
size_t				ft_count_word(char const *s, char c);
void				ft_swap(int *var, int *var2);
int					ft_sqrt(int n);
int					ft_next_sqrt(int n);
char				*ft_strcpy(char *dest, const char *src);
void				ft_strdel(char **as);

#endif
