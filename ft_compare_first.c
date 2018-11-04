/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare_first.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wclayton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 23:09:47 by wclayton          #+#    #+#             */
/*   Updated: 2018/11/04 07:59:31 by wclayton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	ft_compare_first(int *rushnum, t_unt x, t_unt y, char *s)
{
	char	**to_comp_with;
	int		i;
	int		flag;

	flag = 0;
	to_comp_with = (char**)malloc(sizeof(char*) * 6);
	i = -1;
	while (++i < 5)
		if (rushnum[i] == 1)
			to_comp_with[i] = ft_create_rush(i, x, y);
	i = -1;
	while (i++ < 5)
	{
		if (rushnum[i] == 1)
			if (ft_strcmp(s, to_comp_with[i]) == 0)
			{
				ft_printrush(i, x, y, flag);
				flag = 1;
			}
	}
	if (flag == 0)
		ft_print_error();
	ft_putchar('\n');
}
