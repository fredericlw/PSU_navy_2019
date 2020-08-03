/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** generate_board_from_file
*/

#include "navy.h"

char **generate_boat(char *boat, char **board)
{
    int first_x = (boat[2] - 17) - '0' + 2;
    int first_y = boat[3] - '0';
    int second_x = (boat[5] - 17) - '0' + 2;
    int second_y = boat[6] - '0';
    int i = 0;

    if ((second_x - first_x) == 0) {
        for (i = first_y; i != second_y + 1; i++) {
            board[i][first_x] = boat[0];
        }
    }
    if ((second_y - first_y) == 0) {
        for (i = first_x; i != second_x + 1; i++) {
            board[first_y][i] = boat[0];
        }
    }
    return (board);
}

char **generate_player_board_from_file(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    int buff_size = get_buff_size(filepath);
    char *buffer = malloc(sizeof(char) * buff_size + 1);
    char **boat = NULL;
    char **board = generate_empty_board();
    int i = 0;

    read(fd, buffer, buff_size);
    close(fd);
    boat = boats_to_boat_array(buffer);
    for (i = 0; i != 4; i++) {
        board = generate_boat(boat[i], board);
    }
    free(buffer);
    return (board);
}