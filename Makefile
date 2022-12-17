# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcereced <vcereced@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 19:12:25 by vcereced          #+#    #+#              #
#    Updated: 2022/12/17 18:59:32 by vcereced         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_putstr_printf.c ft_strchr_printf.c ft_putchar_printf.c \
ft_itoa_printf.c ft_putnbr_printf.c ft_putnbr_base.c

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
bonus:
#	$(CC) $(CFLAGS) $(SRCBONUS)
#	ar rcs $(NAME) $(OBJTBONUS)

re: fclean all

.PHONY: all clean fclean bonus re exe