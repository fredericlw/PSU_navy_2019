/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** print_board
*/

#include "navy.h"

void print_spacer(void)
{
    int i = 0;

    for (i = 0; i != 17; i++) {
        if (i == 1)
            my_putchar('+');
        else {
            my_putchar('-');
        }
    }
    my_putchar('\n');
}

void print_board(char **board)
{
    int i = 0;
    int j = 0;

    for (i = 0; board[i] != NULL; i++) {
        if (i == 1)
            print_spacer();
        my_putchar(board[i][0]);
        my_putchar(board[i][1]);
        for (j = 2; board[i][j] != '\0'; j++) {
            if (j == 2)
                my_putchar(board[i][j]);
            else {
                my_putchar(' ');
                my_putchar(board[i][j]);
            }
        }
        my_putchar('\n');
    }
}

void print_all_boards(char **player_board, char **enemy_board)
{
    my_putstr("\nmy positions:\n");
    print_board(player_board);
    my_putstr("\nenemy's positions:\n");
    print_board(enemy_board);
    my_putchar('\n');
}

void client_print_all_boards(char **player_board, char **enemy_board)
{
    my_putstr("my positions:\n");
    print_board(player_board);
    my_putstr("\nenemy's positions:\n");
    print_board(enemy_board);
    my_putchar('\n');
}