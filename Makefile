# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/26 17:16:53 by mraineri          #+#    #+#              #
#    Updated: 2024/09/06 14:51:15 by mraineri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## Variables

NAME := ft_printf.a

CC := cc 
CFLAGS := -Wall -Wextra -Werror

FILES := ft_int_to_hex_lowercase.c ft_int_to_hex.c ft_printf.c ft_putchar_increment.c ft_putnbr_fd_increment.c \
 		 ft_putunnbr_fd_increment.c ft_str_increment.c ft_putchar_fd.c ft_strlen.c ft_pointer.c ft_hex_p.c
	

OFILES := $(FILES:%.c=%.o)

## Target's

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

all: $(NAME)

clean: 
	rm -f $(OFILES) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.DEFAULT_GOAL := all


.PHONY: all clean fclean re
