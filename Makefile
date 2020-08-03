##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Generic Makefile
##

SRC	=	src/main.c    \
		src/board/board_generator.c    \
		src/board/print_board.c    \
		src/board/generate_board_from_file.c    \
		src/error_handling/check_boats_in_file.c    \
		src/error_handling/check_boats_position.c    \
		src/error_handling/check_file.c    \
		src/map_handling/boats_to_boat_array.c    \
		src/host/host_handler.c    \
		src/host/login.c    \
		src/host/get_enemy_input.c    \
		src/host/send_postion_to_client.c    \
		src/host/get_client_attack_response.c    \
		src/client/client_handler.c    \
		src/client/client_login.c    \
		src/client/send_position_to_host.c    \
		src/display_pid.c    \
		src/get_player_input.c    \
		src/counter_functions.c    \
		src/get_attack_from_enemy.c    \
		src/check_win.c

OBJ	=	$(SRC:.c=.o)

CFLAGS =	-L./lib/my -lmy -I./include/

NAME =	navy

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C./lib/my
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	make clean -C./lib/my
	rm -f $(OBJ)

fclean: clean
	make fclean -C./lib/my
	rm -f $(NAME)

re: fclean all
