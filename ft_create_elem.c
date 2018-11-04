/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wclayton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 19:44:53 by wclayton          #+#    #+#             */
/*   Updated: 2018/11/04 06:09:50 by wclayton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

t_stack	*ft_create_elem(void)
{
	t_stack *nel;

	nel = (t_stack*)malloc(sizeof(t_stack));
	if (nel)
		nel->next = NULL;
	return (nel);
}
