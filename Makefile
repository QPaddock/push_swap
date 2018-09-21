# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: quinten <quinten@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/31 23:23:29 by quinten           #+#    #+#              #
#    Updated: 2018/09/07 09:26:38 by qpaddock         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all :
	make -C ./checker_includes
	make -C ./push_swap_includes

clean :
	make -C ./push_swap_includes clean
	make -C ./checker_includes clean

fclean :
	make -C ./push_swap_includes fclean
	make -C ./checker_includes fclean

re :
	make -C push_swap_includes re
	make -C checker_includes re
