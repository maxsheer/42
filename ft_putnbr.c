/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wclayton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 18:32:01 by wclayton          #+#    #+#             */
/*   Updated: 2018/11/04 07:26:26 by wclayton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	ft_putnbr(int nbr)
{
	unsigned int tmp;

	if (nbr < 0)
	{
		tmp = -nbr;
		ft_putchar('-');
	}
	else
		tmp = nbr;
	if (tmp >= 10)
		ft_putnbr(tmp / 10);
	ft_putchar('0' + tmp % 10);
}
