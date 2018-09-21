/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <qpaddock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 14:06:29 by qpaddock          #+#    #+#             */
/*   Updated: 2018/09/03 11:36:05 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include "stacks.h"

char	*ft_strjoin_space(char *s1, char *s2);
void	init_stacks(t_stacks *stack_a, t_stacks *stack_b);
void	create_stack(t_stacks *stack_a, char **ch);
int		check_param(char **e);
void	solve_stack(t_stacks *stack_a, t_stacks *stack_b);
void	ft_solve_thr(t_stacks *stack_a, t_stacks *stack_b);
int		is_solved(t_stacks *stack_a);
void	push_ab(t_stacks *stack_a, t_stacks *stack_b, char *ins);
void	swap_ab(t_stacks *stack_a, t_stacks *stack_b, char *ins);
void	rotate_ab(t_stacks *stack_a, t_stacks *stack_b, char *ins);
void	rev_rotate_ab(t_stacks *stack_a, t_stacks *stack_b, char *ins);

#endif
