/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** client_handler
*/

#include "navy.h"

void print_missed(navy *nv, int char_value)
{
    my_putchar(char_value);
    my_put_nbr(nv->y);
    my_putstr(": missed\n");
}

void print_hited(navy *nv, int char_value)
{
    my_putchar(char_value);
    my_put_nbr(nv->y);
    my_putstr(": hit\n");
}

void check_host_attack(navy *nv)
{
    int char_value = 65;

    for (int i = 1; i != nv->x; i++)
        char_value++;
    if (nv->player_board[nv->y][nv->x + 1] != '.'
    && nv->player_board[nv->y][nv->x + 1] != 'x'
    && nv->player_board[nv->y][nv->x + 1] != 'o') {
        print_hited(nv, char_value);
        nv->player_board[nv->y][nv->x + 1] = 'x';
        usleep(10000);
        kill(nv->host, SIGUSR1);
    } else {
        print_missed(nv, char_value);
        if (nv->player_board[nv->y][nv->x + 1] != 'x')
            nv->player_board[nv->y][nv->x + 1] = 'o';
        usleep(10000);
        kill(nv->host, SIGUSR2);
    }
}

void first_turn(navy *nv)
{
    print_all_boards(nv->player_board, nv->enemy_board);
    get_attack_from_enemy(nv);
    check_host_attack(nv);
    check_win(nv);
    my_putchar('\n');
    get_player_input(nv);
    send_position_to_host(nv);
    get_client_attack_response(nv);
    check_win(nv);
}

int client(int ac, char **av)
{
    navy nv;

    nv.player_board = generate_player_board_from_file(av[2]);
    nv.enemy_board = generate_empty_board();
    nv.client = getpid();
    display_my_pid(nv.client);
    connect_to_host(&nv, av);
    first_turn(&nv);
    while (nv.login == 1) {
        client_print_all_boards(nv.player_board, nv.enemy_board);
        get_attack_from_enemy(&nv);
        check_host_attack(&nv);
        if (check_win(&nv) != 1) {
            my_putchar('\n');
            get_player_input(&nv);
            send_position_to_host(&nv);
            get_client_attack_response(&nv);
            check_win(&nv);
        }
    }
}