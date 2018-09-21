/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <qpaddock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 09:39:32 by qpaddock          #+#    #+#             */
/*   Updated: 2018/09/06 09:52:04 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	init_stacks(t_stacks *stack_a, t_stacks *stack_b)
{
	stack_a->stack = (t_node*)malloc(sizeof(t_node));
	stack_a->start = stack_a->stack;
	stack_a->len = 0;
	stack_b->stack = NULL;
	stack_b->start = stack_b->stack;
	stack_b->len = 0;
}

void	create_stack(t_stacks *stack_a, char **ch)
{
	int		i;
	t_node	*temp;

	i = 1;
	stack_a->stack->data = ft_atoi(ch[0]);
	stack_a->stack->next = NULL;
	while (ch[i] != NULL)
	{
		temp = (t_node*)malloc(sizeof(t_node));
		temp->data = ft_atoi(ch[i]);
		temp->next = NULL;
		stack_a->stack->next = temp;
		stack_a->stack = stack_a->stack->next;
		stack_a->len++;
		i++;
	}
}
