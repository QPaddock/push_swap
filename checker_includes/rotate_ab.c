/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <qpaddock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 10:47:33 by qpaddock          #+#    #+#             */
/*   Updated: 2018/09/06 09:53:15 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		ft_rotate(t_stacks *stack_a)
{
	t_node	*temp;

	temp = stack_a->start;
	if (temp && stack_a->len > 0)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = stack_a->start;
		stack_a->start = stack_a->start->next;
		temp->next->next = NULL;
		return (1);
	}
	stack_a->stack = stack_a->start;
	return (0);
}

int		rotate_ab(t_stacks *stack_a, t_stacks *stack_b, char *ins)
{
	if (!ft_strcmp(ins, "ra"))
		ft_rotate(stack_a);
	else if (!ft_strcmp(ins, "rb"))
		ft_rotate(stack_b);
	else if (!ft_strcmp(ins, "rr"))
	{
		ft_rotate(stack_a);
		ft_rotate(stack_b);
	}
	else if (!ft_strcmp(ins, "rrr") || !ft_strcmp(ins, "rra")
			|| !ft_strcmp(ins, "rrb"))
		rev_rotate_ab(stack_a, stack_b, ins);
	else
	{
		return (0);
	}
	return (1);
}
