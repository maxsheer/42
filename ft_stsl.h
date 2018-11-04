/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stsl.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wclayton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 06:39:34 by wclayton          #+#    #+#             */
/*   Updated: 2018/11/04 07:53:11 by wclayton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STSL_H
# define FT_STSL_H

typedef struct			s_sym
{
	char				topleft;
	char				topright;
	char				botleft;
	char				botright;
	char				sideinter;
	char				tbinter;
}						t_sym;

t_sym					g_symtab[] =
{
	{'o', 'o', 'o', 'o', '|', '-'},
	{'/', '\\', '\\', '/', '*', '*'},
	{'A', 'A', 'C', 'C', 'B', 'B'},
	{'A', 'C', 'A', 'C', 'B', 'B'},
	{'A', 'C', 'C', 'A', 'B', 'B'}
};
#endif
