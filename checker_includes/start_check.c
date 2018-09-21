/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <qpaddock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 12:08:21 by qpaddock          #+#    #+#             */
/*   Updated: 2018/09/03 13:01:57 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		check_ins(char *line, t_stacks *stack_a, t_stacks *stack_b)
{
	if (ft_strchr(line, 's') != NULL)
	{
		if (!swap_ab(stack_a, stack_b, line))
			return (0);
	}
	else if (ft_strchr(line, 'p') != NULL)
	{
		if (!push_ab(stack_a, stack_b, line))
			return (0);
	}
	else if (ft_strchr(line, 'r') != NULL)
	{
		if (!rotate_ab(stack_a, stack_b, line))
			return (0);
	}
	else
		return (0);
	return (1);
}

int		start_check(t_stacks *stack_a, t_stacks *stack_b)
{
	char	*line;

	while (get_next_line(0, &line) != 0)
	{
		if (check_ins(line, stack_a, stack_b) == 0)
		{
			ft_putendl_fd("ERROR : Not an instruction", 2);
			return (0);
		}
		free(line);
	}
	if (line)
		free(line);
	stack_a->stack = stack_a->start;
	return (1);
}
