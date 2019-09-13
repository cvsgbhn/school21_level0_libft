# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 16:56:59 by vdanilo           #+#    #+#              #
#    Updated: 2019/09/13 18:27:47 by vdanilo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libft"

SOURCES = ./*.c

OBJECTS = ./*.o

INCLUDES = ./ft_libft.h

.PHONY: all clean fclean re

all: display_file 

display_file: 
	gcc -c -Wall -Wextra -Werror $(SOURCES) -I $(INCLUDES)
	gcc -o $(NAME) $(OBJECTS)

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all 
