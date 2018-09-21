/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <qpaddock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 11:52:14 by qpaddock          #+#    #+#             */
/*   Updated: 2018/08/27 11:06:11 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACKS_H
# define STACKS_H

typedef struct	s_node
{
	int				data;
	struct s_node	*next;
}				t_node;

typedef struct	s_stacks
{
	int		len;
	t_node	*start;
	t_node	*stack;
}				t_stacks;

#endif
