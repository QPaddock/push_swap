/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_thr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <qpaddock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 10:33:40 by qpaddock          #+#    #+#             */
/*   Updated: 2018/09/03 11:33:58 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		rev_solved(t_stacks *stack_a)
{
	stack_a->stack = stack_a->start;
	while (stack_a->stack->next)
	{
		if (stack_a->stack->data >= stack_a->stack->next->data)
			stack_a->stack = stack_a->stack->next;
		else
			return (0);
	}
	return (1);
}

int		messy(t_stacks *stack_a)
{
	int		count;

	count = 0;
	if (stack_a->start->data > stack_a->start->next->data &&
		stack_a->start->next->data < stack_a->start->next->next->data)
		count++;
	if (stack_a->start->data > stack_a->start->next->data &&
		stack_a->start->next->data < stack_a->start->next->next->data &&
		stack_a->start->next->next->data > stack_a->start->data)
		count++;
	return (count);
}

void	ft_solve_thr(t_stacks *stack_a, t_stacks *stack_b)
{
	if (is_solved(stack_a) && stack_b->len == 0)
		return ;
	else if (rev_solved(stack_a))
	{
		swap_ab(stack_a, stack_b, "sa");
		ft_putendl("sa");
		rotate_ab(stack_a, stack_b, "rra");
		ft_putendl("rra");
	}
	else if (messy(stack_a) == 1)
	{
		rotate_ab(stack_a, stack_b, "rra");
		ft_putendl("rra");
		rotate_ab(stack_a, stack_b, "rra");
		ft_putendl("rra");
	}
}
