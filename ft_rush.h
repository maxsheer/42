/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creicher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:33:55 by creicher          #+#    #+#             */
/*   Updated: 2018/11/04 07:52:08 by wclayton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H
# include <stdlib.h>
# include <unistd.h>

typedef struct			s_stack
{
	struct s_stack		*next;
	char				data;
}						t_stack;

typedef unsigned int	t_unt;
int						ft_strcmp(char *s1, char *s2);
void					ft_putchar(char c);
void					ft_putstr(char *str);
void					ft_printrush(int r, t_unt x, t_unt y, int multi);
void					ft_print_error(void);
char					*ft_create_rush(int r, t_unt x, t_unt y);
t_stack					*ft_create_elem(void);
void					ft_compare_first(int *r, t_unt x, t_unt y, char *s);
void					ft_compare(char *str);
void					ft_check(t_stack *beg);
void					ft_putnbr(int nbr);

#endif
