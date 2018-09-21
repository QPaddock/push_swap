/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_ab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <qpaddock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:33:33 by qpaddock          #+#    #+#             */
/*   Updated: 2018/09/06 09:55:35 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		ft_rev(t_stacks *stack_a)
{
	t_node	*temp;
	t_node	*last;

	if (stack_a->len > 1)
	{
		temp = stack_a->start;
		last = stack_a->start;
		while (temp->next)
			temp = temp->next;
		while (last->next->data != temp->data)
			last = last->next;
		temp->next = stack_a->start;
		last->next = NULL;
		stack_a->start = temp;
	}
	return (1);
}

void	rev_rotate_ab(t_stacks *stack_a, t_stacks *stack_b, char *ins)
{
	if (!ft_strcmp(ins, "rra"))
	{
		ft_rev(stack_a);
		stack_a->stack = stack_a->start;
	}
	else if (!ft_strcmp(ins, "rrb"))
	{
		ft_rev(stack_b);
		stack_b->stack = stack_b->start;
	}
	else if (!ft_strcmp(ins, "rrr"))
	{
		ft_rev(stack_a);
		stack_a->stack = stack_a->start;
		ft_rev(stack_b);
		stack_b->stack = stack_b->start;
	}
}
