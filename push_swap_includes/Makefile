# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qpaddock <qpaddock@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/27 14:19:48 by qpaddock          #+#    #+#              #
#    Updated: 2018/09/06 10:12:30 by qpaddock         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror

SRC = push_swap.c push_ab.c make_stack.c rev_rotate_ab.c rotate_ab.c swap_ab.c \
		extras.c solve_stack.c is_solved.c ft_solve_thr.c errors.c 

OUT = push_swap.o push_ab.o make_stack.o rev_rotate_ab.o rotate_ab.o swap_ab.o \
		extras.o solve_stack.o is_solved.o ft_solve_thr.o errors.o 

all :
	gcc $(FLAGS) -I ../libft/includes -c $(SRC)
	gcc -o push_swap $(OUT) -I ../libft/includes -L ../libft -lft
	mv push_swap ../

clean :
	rm -rf $(OUT)

fclean : clean
	rm -rf ../push_swap

re : fclean all
