/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creicher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:33:55 by creicher          #+#    #+#             */
/*   Updated: 2018/11/03 17:04:22 by creicher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_rush
{
	char	lefttop;
	char	intertop;
	char	righttop;
	char	sideinter;
	char	leftbot;
	char	rightbot;
}				t_rush;

t_rush	g_symtab[] = 
{
	{'o', '-', 'o', '|', 'o', 'o'},
	{'/', '*', '\\', '*', '\\', '/'},
	{'A', 'B', 'A', 'B', 'C', 'C'},
	{'A', 'B', 'C', 'B', 'A', 'C'},
	{'A', 'B', 'C', 'B', 'C', 'A'}
};

void	ft_putchar(char);
void	ft_putstr(char*);

#endif
