# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flee <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/20 19:23:49 by flee              #+#    #+#              #
#    Updated: 2021/08/10 15:57:25 by flee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =	ft_printf.c \
		ft_arg_u.c \
		ft_arg_x.c \
		ft_arg_p.c \
		ft_putstr.c \
		ft_putchar.c \
		ft_strlcpy.c \
		ft_putnbr.c \

SRCBONUS = \

OBJS = $(SRC:.c=.o)

OBJSBONUS = $(SRCBONUS:.c=.o)

all:        $(NAME)

$(NAME):    $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus:    $(OBJSBONUS)
	ar rc $(NAME) $(OBJSBONUS)
.c.o:
		gcc -Wall -Wextra -Werror -c $< -o $(<:.c=.o)
clean:
		/bin/rm -f $(OBJS)    $(OBJSBONUS)

fclean:	clean
	/bin/rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re

