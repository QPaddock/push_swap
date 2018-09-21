/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_solved.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <qpaddock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 10:10:59 by qpaddock          #+#    #+#             */
/*   Updated: 2018/08/31 10:11:03 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		is_solved(t_stacks *stack_a)
{
	stack_a->stack = stack_a->start;
	while (stack_a->stack->next)
	{
		if (stack_a->stack->data <= stack_a->stack->next->data)
			stack_a->stack = stack_a->stack->next;
		else
			return (0);
	}
	return (1);
}
