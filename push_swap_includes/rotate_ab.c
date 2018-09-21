/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <qpaddock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 10:47:33 by qpaddock          #+#    #+#             */
/*   Updated: 2018/09/03 11:37:55 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_rotate(t_stacks *stack_a)
{
	t_node	*temp;

	temp = stack_a->start;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = stack_a->start;
		stack_a->start = stack_a->start->next;
		temp->next->next = NULL;
		return (1);
	}
	return (0);
}

void	rotate_ab(t_stacks *stack_a, t_stacks *stack_b, char *ins)
{
	if (!ft_strcmp(ins, "ra"))
	{
		ft_rotate(stack_a);
		stack_a->stack = stack_a->start;
	}
	else if (!ft_strcmp(ins, "rb"))
	{
		ft_rotate(stack_b);
		stack_b->stack = stack_b->start;
	}
	else if (!ft_strcmp(ins, "rr"))
	{
		ft_rotate(stack_a);
		stack_a->stack = stack_a->start;
		ft_rotate(stack_b);
		stack_b->stack = stack_b->start;
	}
	else if (!ft_strcmp(ins, "rrr") || !ft_strcmp(ins, "rra")
			|| !ft_strcmp(ins, "rrb"))
		rev_rotate_ab(stack_a, stack_b, ins);
}
