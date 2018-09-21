/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <qpaddock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 13:09:30 by qpaddock          #+#    #+#             */
/*   Updated: 2018/09/06 09:57:56 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		ft_push(t_stacks *from, t_stacks *to)
{
	t_node	*temp;
	t_node	*temp2;

	if (from->len > 1)
	{
		temp = from->start;
		from->start = from->start->next;
		temp->next = to->stack;
		temp2 = to->start;
		to->start = temp;
		to->start->next = temp2;
		to->len++;
		from->len--;
		return (1);
	}
	return (0);
}

int		push_ab(t_stacks *stack_a, t_stacks *stack_b, char *ins)
{
	if (!ft_strcmp(ins, "pa"))
	{
		ft_push(stack_b, stack_a);
		stack_a->stack = stack_a->start;
		stack_b->stack = stack_b->start;
	}
	else if (!ft_strcmp(ins, "pb"))
	{
		ft_push(stack_a, stack_b);
		stack_a->stack = stack_a->start;
		stack_b->stack = stack_b->start;
	}
	else
	{
		return (0);
	}
	return (1);
}
