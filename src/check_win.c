/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** check_win
*/

#include "navy.h"
extern int bin_count;

int count_x_on_enemy_board(navy *nv)
{
    int i = 1;
    int j = 2;
    int enemy_x_count = 0;

    for (i = 0; i != 9; i++) {
        for (j = 0; j != 15; j++) {
            if (nv->enemy_board[i][j] == 'x')
                enemy_x_count++;
        }
    }
    return (enemy_x_count);
}

int count_x_on_player_board(navy *nv)
{
    int i = 1;
    int j = 2;
    int player_x_count = 0;

    for (i = 0; i != 9; i++) {
        for (j = 0; j != 15; j++) {
            if (nv->player_board[i][j] == 'x')
                player_x_count++;
        }
    }
    return (player_x_count);
}

int check_win(navy *nv)
{
    int player_x_count = count_x_on_player_board(nv);
    int enemy_x_count = count_x_on_enemy_board(nv);

    if (player_x_count == 14) {
        print_all_boards(nv->player_board, nv->enemy_board);
        my_putstr("Enemy won\n");
        nv->login = 0;
        bin_count = 1;
        return (1);
    } else if (enemy_x_count == 14) {
        print_all_boards(nv->player_board, nv->enemy_board);
        my_putstr("I won\n");
        nv->login = 0;
        bin_count = 0;
        return (1);
    }else {
        return (0);
    }
}