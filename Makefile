# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 16:56:59 by vdanilo           #+#    #+#              #
#    Updated: 2019/09/17 16:14:48 by vdanilo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ft_atoi.c ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putnbr.c ft_strcat.c ft_strchr.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strlcat.c ft_strlen.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strrchr.c ft_strstr.c ft_tolower.c ft_toupper.c ft_putchar_putstr.c 

OBJECTS = ${SOURCES:.c=.o}

INCLUDES = ft_libft.h

all: $(NAME) 

$(NAME): $(SRCS) $(OBJECTS) $(INCLUDES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(OBJECTS): %.o: %.c
	gcc -c -Wall -Wextra -Werror $< -I$(INCLUDES)

clean:
	/bin/rm -rf $(OBJECTS) 

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all 
