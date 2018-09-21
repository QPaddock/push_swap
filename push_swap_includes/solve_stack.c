/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <qpaddock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 14:30:29 by qpaddock          #+#    #+#             */
/*   Updated: 2018/09/03 11:40:35 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_find(t_stacks *stack_a, int *lowest)
{
	int		i;
	int		pos;

	i = 0;
	*lowest = stack_a->start->data;
	while (stack_a->stack)
	{
		if (stack_a->stack->data < *lowest)
		{
			*lowest = stack_a->stack->data;
			pos = i;
		}
		i++;
		stack_a->stack = stack_a->stack->next;
	}
	return (pos);
}

void	empty_b(t_stacks *stack_b, t_stacks *stack_a)
{
	while (stack_b->stack)
	{
		push_ab(stack_a, stack_b, "pa");
		ft_putendl("pa");
	}
}

void	rev_rot(t_stacks *stack_a, t_stacks *stack_b, int lowest)
{
	while (stack_a->start->data != lowest)
	{
		rotate_ab(stack_a, stack_b, "rra");
		ft_putendl("rra");
	}
}

void	rot(t_stacks *stack_a, t_stacks *stack_b, int lowest)
{
	while (stack_a->start->data != lowest)
	{
		rotate_ab(stack_a, stack_b, "ra");
		ft_putendl("ra");
	}
}

void	solve_stack(t_stacks *stack_a, t_stacks *stack_b)
{
	int		pos;
	int		lowest;

	while (stack_a->len >= 0)
	{
		stack_a->stack = stack_a->start;
		pos = ft_find(stack_a, &lowest);
		if (pos == 1)
		{
			swap_ab(stack_a, stack_b, "sa");
			ft_putendl("sa");
		}
		else if (pos > stack_a->len / 2)
			rev_rot(stack_a, stack_b, lowest);
		else
			rot(stack_a, stack_b, lowest);
		if (is_solved(stack_a) == 1)
			break ;
		push_ab(stack_a, stack_b, "pb");
		ft_putendl("pb");
	}
	empty_b(stack_b, stack_a);
}
