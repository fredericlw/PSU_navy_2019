##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile for libmy
##

SRC	=	my_putchar.c    \
		my_swap.c    \
		my_isneg.c    \
		my_put_nbr.c    \
		my_putstr.c    \
		my_strlen.c    \
		my_compute_power_rec.c    \
		my_compute_square_root.c    \
		my_find_prime_sup.c    \
		my_is_prime.c    \
		my_revstr.c    \
		my_strstr.c    \
		my_strcat.c    \
		my_strncat.c    \
		my_strcpy.c    \
		my_strncpy.c    \
		my_strcmp.c    \
		my_strncmp.c    \
		my_atoi.c    \
		my_strtol.c    \
		my_getbuffsize.c    \
		my_intlen.c    \
		my_itoa.c    \
		my_str_to_word_array.c    \
		my_strcpy_from_to.c

NAME	=	libmy.a

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm 	-f 	$(NAME)

re:	fclean	all