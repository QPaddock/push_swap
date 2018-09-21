/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <qpaddock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 15:32:02 by qpaddock          #+#    #+#             */
/*   Updated: 2018/08/27 14:25:12 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_swap(t_stacks *stack)
{
	int		temp;

	if (stack->start == NULL)
		return (0);
	temp = stack->start->data;
	stack->start->data = stack->start->next->data;
	stack->start->next->data = temp;
	return (1);
}

void	swap_ab(t_stacks *stack_a, t_stacks *stack_b, char *ins)
{
	if (!ft_strcmp(ins, "sa"))
	{
		ft_swap(stack_a);
		stack_a->stack = stack_a->start;
	}
	else if (!ft_strcmp(ins, "sb"))
	{
		ft_swap(stack_b);
		stack_b->stack = stack_b->start;
	}
	if (!ft_strcmp(ins, "ss"))
	{
		ft_swap(stack_b);
		ft_swap(stack_a);
		stack_b->stack = stack_b->start;
		stack_a->stack = stack_a->start;
	}
}
