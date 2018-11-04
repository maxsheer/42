/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wclayton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:15:20 by wclayton          #+#    #+#             */
/*   Updated: 2018/11/04 07:10:06 by wclayton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	ft_freebeg(t_stack *beg, t_stack *start)
{
	while (beg)
	{
		beg = beg->next;
		free(start);
		start = beg;
	}
}

void	ft_check(t_stack *beg)
{
	int		size;
	t_stack	*start;
	char	*instr;
	int		i;

	size = 0;
	start = beg;
	while (beg)
	{
		size++;
		beg = beg->next;
	}
	instr = (char*)malloc(sizeof(char) * (size + 1));
	i = -1;
	beg = start;
	while (i++ < size)
	{
		instr[i] = start->data;
		if (start->next)
			start = start->next;
	}
	instr[size] = '\0';
	start = beg;
	ft_freebeg(beg, start);
	ft_compare(instr);
}
