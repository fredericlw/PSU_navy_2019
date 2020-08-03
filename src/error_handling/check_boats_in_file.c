/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** check_boats_in_file
*/

#include "navy.h"

int get_nb_lines(char const *buffer)
{
    int i = 0;
    int count = 0;
    int len = my_strlen(buffer);

    for (i = 0; i != len; i++) {
        if (buffer[i] == '\n' || buffer[i] == '\0')
            count++;
    }
    count++;
    if (count != 4)
        return (84);
}

int check_boat_sizes(char **boat)
{
    if (boat[0][0] != '2' || boat[1][0] != '3' || boat[2][0] != '4' ||
    boat[3][0] != '5')
        return (84);
}

int check_boat_real_size(char **boat)
{
    int i = 0;
    int first_x;
    int first_y;
    int second_x;
    int second_y;
    int size;

    for (i = 0; i != 4; i++) {
        first_x = (boat[i][2] - 17) - '0' + 2;
        first_y = boat[i][3] - '0';
        second_x = (boat[i][5] - 17) - '0' + 2;
        second_y = boat[i][6] - '0';
        if (second_x - first_x == 0)
            size = (second_y - first_y) + 1;
        if (second_y - first_y == 0)
            size = (second_x - first_x) + 1;
        if (size != (boat[i][0] - '0'))
            return (84);
    }
}

int generate_check_boat(char *boat, char **board)
{
    int first_x = (boat[2] - 17) - '0' + 2;
    int first_y = boat[3] - '0';
    int second_x = (boat[5] - 17) - '0' + 2;
    int second_y = boat[6] - '0';
    int i = 0;

    if ((second_x - first_x) == 0) {
        for (i = first_y; i != second_y + 1; i++) {
            if (board[i][first_x] != '.')
                return (84);
            board[i][first_x] = boat[0];
        }
    }
    if ((second_y - first_y) == 0) {
        for (i = first_x; i != second_x + 1; i++) {
            if (board[first_y][i] != '.')
                return (84);
            board[first_y][i] = boat[0];
        }
    }
}

int generate_check_board(char **boat)
{
    char **board = generate_empty_board();
    int i = 0;

    for (i = 0; i != 4; i++) {
        if (generate_check_boat(boat[i], board) == 84)
            return (84);
    }
}