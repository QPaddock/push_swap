# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: quinten <quinten@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/27 13:53:37 by qpaddock          #+#    #+#              #
#    Updated: 2018/09/01 00:18:21 by quinten          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror

SRC = checker.c extras.c make_stack.c \
		start_check.c push_ab.c \
		swap_ab.c rotate_ab.c rev_rotate_ab.c \
		is_solved.c errors.c 

OUT = checker.o extras.o make_stack.o \
		start_check.o push_ab.o \
		swap_ab.o rotate_ab.o rev_rotate_ab.o \
		is_solved.o errors.o 
all :
	make -C ../libft fclean && make -C ../libft
	gcc $(FLAGS) -I ../libft/includes -c $(SRC)
	gcc -o checker $(OUT) -I ../libft/includes -L ../libft -lft
	mv checker ../

clean :
	rm -rf $(OUT)
	make -C ../libft clean

fclean : clean
	rm -rf ../checker
	make -C ../libft fclean

re : fclean all
