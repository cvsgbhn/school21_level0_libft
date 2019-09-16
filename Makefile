# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 16:56:59 by vdanilo           #+#    #+#              #
#    Updated: 2019/09/16 18:51:47 by vdanilo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libft.a"

SOURCES = ./*.c

OBJECTS = ./*.o

INCLUDES = ./ft_libft.h

.PHONY: all clean fclean re

all: $(NAME) 

$(NAME):
	flex -t *.o > *.c
	gcc -Wall -Wextra -Werror -c $(SOURCES) -I $(INCLUDES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all 
