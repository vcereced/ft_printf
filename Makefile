# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcereced <vcereced@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/20 00:18:14 by vcereced          #+#    #+#              #
#    Updated: 2022/12/20 15:52:49 by vcereced         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_putstr_printf.c ft_putnbr_printf.c ft_printf.c
SRCBONUS = 

OBJT = $(SRC:.c=.o)

OBJTBONUS = $(SRCBONUS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

CC = gcc -c

all: $(NAME)

$(NAME): $(OBJT)
#		$(CC) $(CFLAGS) $(SRC) #haria relink
		ar rcs $(NAME) $(OBJT)

exe: all
	gcc -L. -lftprintf main.c 

clean:
	rm -f $(OBJT) $(OBJTBONUS)

fclean: clean
	rm -f $(NAME)
#bonus:
#	$(CC) $(CFLAGS) $(SRCBONUS)
#	ar rcs $(NAME) $(OBJTBONUS)

re: fclean all

.PHONY: all clean fclean bonus re exe