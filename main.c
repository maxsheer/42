/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creicher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:55:42 by creicher          #+#    #+#             */
/*   Updated: 2018/11/04 07:02:19 by wclayton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	main(void)
{
	int		ret;
	t_stack	*s;
	t_stack *beg;

	s = (t_stack*)malloc(sizeof(t_stack));
	if (s)
	{
		beg = s;
		while ((ret = read(0, &s->data, 1)))
		{
			s->next = ft_create_elem();
			s = s->next;
		}
		ft_check(beg);
	}
	return (0);
}
