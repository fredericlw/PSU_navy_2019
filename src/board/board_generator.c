/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** board_generator
*/

#include "navy.h"

char *generate_line(int line_number)
{
    char *line = malloc(sizeof(char) * 11);
    int i = 2;

    line[0] = line_number + 48;
    line[1] = '|';
    for (i = 2; i != 10; i++) {
        line[i] = '.';
    }
    return (line);
}

char *generate_first_line(void)
{
    char *line = malloc(sizeof(char) * 11);

    line = " |ABCDEFGH";
    return (line);
}

char **generate_empty_board(void)
{
    int i = 0;
    int j = 0;
    char **board = malloc(sizeof(char *) * 9);

    for (i = 0; i != 9; i++) {
        if (i == 0)
            board[i] = generate_first_line();
        else {
            board[i] = generate_line(i);
        }
    }
    board[i] = NULL;
    return (board);
}