/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wclayton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 22:28:36 by wclayton          #+#    #+#             */
/*   Updated: 2018/11/04 08:02:38 by wclayton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

t_unt		ft_rushnum(char *str, int *rushnum)
{
	t_unt	i;

	i = 0;
	if (str[0] == 'o')
		rushnum[0] = 1;
	if (str[0] == '/')
		rushnum[1] = 1;
	if (str[0] == 'A')
	{
		rushnum[2] = 1;
		rushnum[3] = 1;
		rushnum[4] = 1;
	}
	while (str[i] != '\n')
		i++;
	return (i);
}

void		ft_compare(char *str)
{
	int		*rushnum;
	t_unt	x;
	t_unt	y;
	int		i;

	y = 0;
	i = 0;
	rushnum = (int*)malloc(sizeof(int) * 6);
	while (i < 5)
	{
		rushnum[i] = -1;
		i++;
	}
	x = ft_rushnum(str, rushnum);
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			y++;
		i++;
	}
	ft_compare_first(rushnum, x, y, str);
}
