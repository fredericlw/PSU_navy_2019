/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** host_handler
*/

#include "navy.h"
extern int bin_count;

void check_client_attack(navy *nv)
{
    int char_value = 65;
    int i = 1;

    for (i = 1; i != nv->x; i++)
        char_value++;
    if (nv->player_board[nv->y][nv->x + 1] != '.'
    && nv->player_board[nv->y][nv->x + 1] != 'x'
    && nv->player_board[nv->y][nv->x + 1] != 'o') {
        print_hited(nv, char_value);
        nv->player_board[nv->y][nv->x + 1] = 'x';
        usleep(10000);
        kill(nv->client, SIGUSR1);
    } else {
        print_missed(nv, char_value);
        if (nv->player_board[nv->y][nv->x + 1] != 'x')
            nv->player_board[nv->y][nv->x + 1] = 'o';
        usleep(10000);
        kill(nv->client, SIGUSR2);
    }
}

int host(int ac, char **av)
{
    navy nv;

    nv.player_board = generate_player_board_from_file(av[1]);
    nv.enemy_board = generate_empty_board();
    nv.host = getpid();
    display_my_pid(nv.host);
    my_putstr("waiting for enemy connection...\n");
    connect_to_client(&nv);
    while (nv.login == 1) {
        print_all_boards(nv.player_board, nv.enemy_board);
        get_player_input(&nv);
        send_position_to_client(&nv);
        get_client_attack_response(&nv);
        if (check_win(&nv) != 1) {
            get_input_from_enemy(&nv);
            check_client_attack(&nv);
            check_win(&nv);
        }
    }
}