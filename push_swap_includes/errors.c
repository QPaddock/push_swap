/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <qpaddock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 11:26:31 by qpaddock          #+#    #+#             */
/*   Updated: 2018/09/03 11:32:44 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_max_min(char **e)
{
	int		i;

	i = 0;
	while (e[i])
	{
		if ((unsigned int)ft_atoi(e[i]) >= 2147483648 &&
			(long)ft_atoi(e[i]) < -2147483648)
		{
			ft_putendl_fd("ERROR : MAX/MIN int", 2);
			return (0);
		}
		i++;
	}
	return (1);
}

int		check_dup(char **e)
{
	int		i;
	int		j;

	i = 0;
	while (e[i] != NULL)
	{
		j = 0;
		while (e[j] != NULL)
		{
			if (i == j)
				j++;
			if (!e[j])
				return (1);
			if (ft_atoi(e[j]) == ft_atoi(e[i]) && e[j])
			{
				ft_putendl_fd("ERROR : Duplicate parameters", 2);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		check_param(char **e)
{
	int		i;
	int		j;

	i = 0;
	while (e[i])
	{
		j = 0;
		while (e[i][j])
		{
			if (!ft_isdigit(e[i][j]) && !ft_atoi(e[i]))
			{
				ft_putendl_fd("ERROR : Wrong Parameters", 2);
				return (0);
			}
			j++;
		}
		i++;
	}
	if (!check_dup(e) || !check_max_min(e))
		return (0);
	return (1);
}
