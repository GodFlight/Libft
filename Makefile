# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkeli <rkeli@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/03 12:46:07 by rkeli             #+#    #+#              #
#    Updated: 2019/04/07 23:29:24 by rkeli            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = *.c

INCLUDES = libft.h

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -I $(INCLUDES) -c $(SRCS)
	ar rc $(NAME) *.o

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all
