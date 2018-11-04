/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printrush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wclayton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 04:30:24 by wclayton          #+#    #+#             */
/*   Updated: 2018/11/04 08:01:28 by wclayton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	ft_printrush(int rushnum, t_unt x, t_unt y, int multi)
{
	if (multi != 0)
		ft_putstr(" || ");
	ft_putstr("[rush-0");
	ft_putnbr(rushnum);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}
