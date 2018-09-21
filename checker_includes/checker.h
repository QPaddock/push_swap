/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpaddock <qpaddock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 11:52:00 by qpaddock          #+#    #+#             */
/*   Updated: 2018/09/03 11:42:59 by qpaddock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "../libft/libft.h"
# include "stacks.h"

char	*ft_strjoin_space(char *s1, char *s2);
void	get_stack(int i, char **s, char ***ch);
int		check_param(char **e);
void	arr_free(char **arr);
void	init_stacks(t_stacks *stack_a, t_stacks *stack_b);
void	create_stack(t_stacks *stack_a, char **ch);
int		is_solved(t_stacks *stack_a);
int		start_check(t_stacks *stack_a, t_stacks *stack_b);
int		push_ab(t_stacks *stack_a, t_stacks *stack_b, char *ins);
int		swap_ab(t_stacks *stack_a, t_stacks *stack_b, char *ins);
int		rotate_ab(t_stacks *stack_a, t_stacks *stack_b, char *ins);
void	rev_rotate_ab(t_stacks *stack_a, t_stacks *stack_b, char *ins);

#endif
