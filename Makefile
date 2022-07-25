# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkord <gkord@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 13:55:15 by gkord             #+#    #+#              #
#    Updated: 2021/12/05 15:18:25 by gkord            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	libftprintf.a
HEADER		=	ft_printf.h
SRC			=	ft_printf.c ft_putchar.c ft_puthexptr.c ft_putlowhexnbr.c \
				ft_putnbr.c ft_putptr.c ft_putstr.c ft_putunsignednbr.c ft_putuphexnbr.c

OBJ			=	$(SRC:%.c=%.o)

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror -I$(HEADER)
RM			=	rm -f *.o

.PHONY	:	all clean fclean re bonus

all	:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ) $?

%.o	:	%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	$(RM) $(OBJ)

fclean	:
	$(RM) $(NAME)

re	:	fclean all
