# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkaman <kkaman@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/29 15:20:27 by kkaman            #+#    #+#              #
#    Updated: 2025/11/26 12:05:21 by kkaman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC	= cc

CFLAGS	= -Wall -Wextra -Werror -fPIC

AR	= ar rcs

RM	= rm -f

SRC	= ft_printf.c print_strings.c print_numbers.c print_hexa.c

BONUS_SRC = ft_printf_bonus.c parse_format_bonus.c parse_utils_bonus.c \
	    print_char_bonus.c print_string_bonus.c print_int_bonus.c \
	    print_int_utils_bonus.c print_unsigned_bonus.c \
	    print_unsigned_utils_bonus.c print_hex_bonus.c \
	    print_hex_utils_bonus.c print_pointer_bonus.c \
	    print_pointer_utils_bonus.c print_percent_bonus.c \
	    ft_strlen.c ft_memset.c number_utils_bonus.c print_utils_bonus.c

OBJ	= $(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

ALL	= $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

bonus: $(BONUS_OBJ)
	$(RM) $(OBJ)
	$(RM) $(NAME)
	$(AR) $(NAME) $(BONUS_OBJ)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
