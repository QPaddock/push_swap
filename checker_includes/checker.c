/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <qpaddock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 11:51:50 by qpaddock          #+#    #+#             */
/*   Updated: 2018/09/06 10:14:27 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	get_stack(int i, char **s, char ***ch)
{
	char	*str;
	int		j;

	j = 1;
	str = ft_strnew(0);
	while (j != i)
	{
		str = ft_strjoin_space(str, s[j]);
		j++;
	}
	*ch = ft_strsplit(str, ' ');
	free(str);
}

void	arr_free(char **arr)
{
	int		i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

int		main(int ac, char **av)
{
	char		**ch;
	t_stacks	stack_a;
	t_stacks	stack_b;

	if (ac > 1)
	{
		get_stack(ac, av, &ch);
		if (!check_param(ch))
			return (0);
		init_stacks(&stack_a, &stack_b);
		create_stack(&stack_a, ch);
		if (is_solved(&stack_a) == 0)
		{
			if (!start_check(&stack_a, &stack_b))
				return (0);
		}
		arr_free(ch);
		if (is_solved(&stack_a) == 1)
			ft_putendl("OK");
		else
			ft_putendl("KO");
	}
	return (0);
}
