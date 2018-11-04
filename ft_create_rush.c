/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_rush.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wclayton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 00:14:20 by wclayton          #+#    #+#             */
/*   Updated: 2018/11/04 08:00:31 by wclayton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#include "ft_stsl.h"
#include "ft_fict.h"

char	ft_symsert(t_fict a, t_unt x, t_unt y, int rushnum)
{
	if (a.i == 0 && a.k == 0)
		return (g_symtab[rushnum].topleft);
	else if (a.i == 0 && a.k == x - 1)
		return (g_symtab[rushnum].topright);
	else if (a.i == y - 1 && a.k == 0)
		return (g_symtab[rushnum].botleft);
	else if (a.i == y - 1 && a.k == x - 1)
		return (g_symtab[rushnum].botright);
	else if ((a.i == 0 || a.i == y - 1) && a.k > 0 && a.k < x - 1)
		return (g_symtab[rushnum].tbinter);
	else if (a.i != 0 && a.i != y - 1 && (a.k == 0 || a.k == x - 1))
		return (g_symtab[rushnum].sideinter);
	else if (a.i != 0 && a.i != y - 1 && a.k > 0 && a.k < x - 1)
		return (' ');
	else
		return ('\n');
}

char	*ft_create_rush(int rushnum, t_unt x, t_unt y)
{
	char			*rush;
	t_fict			a;

	a.i = 0;
	rush = (char*)malloc(sizeof(char) * (x * y + y + 1));
	while (a.i < y)
	{
		a.k = 0;
		while (a.k <= x)
		{
			rush[a.i * (x + 1) + a.k] = ft_symsert(a, x, y, rushnum);
			a.k++;
		}
		a.i++;
	}
	rush[x * y + y] = '\0';
	return (rush);
}
