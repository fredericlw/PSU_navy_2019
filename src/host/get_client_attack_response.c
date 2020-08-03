/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** get_client_attack_response
*/

#include "navy.h"
extern int bin_count;

void print_hit(navy *nv)
{
    int x = nv->input_buffer[0] - 'A' + 1;
    int y = nv->input_buffer[1] - '1' + 1;

    my_putchar(nv->input_buffer[0]);
    my_putchar(nv->input_buffer[1]);
    my_putstr(": hit\n\n");
    nv->enemy_board[y][x + 1] = 'x';
}

void print_miss(navy *nv)
{
    int x = nv->input_buffer[0] - 'A' + 1;
    int y = nv->input_buffer[1] - '1' + 1;

    my_putchar(nv->input_buffer[0]);
    my_putchar(nv->input_buffer[1]);
    my_putstr(": missed\n\n");
    if (nv->enemy_board[y][x + 1] != 'x'){
        nv->enemy_board[y][x + 1] = 'o';
    }
}

void get_client_attack_response(navy *nv)
{
    struct sigaction first_sig;
    struct sigaction second_sig;

    first_sig.sa_sigaction = &counter_add;
    first_sig.sa_flags = SA_SIGINFO;
    second_sig.sa_sigaction = &do_nothing;
    second_sig.sa_flags = SA_SIGINFO;
    bin_count = 0;
    sigaction(12, &second_sig, NULL);
    sigaction(10, &first_sig, NULL);
    pause();
    if (bin_count == 1) {
        print_hit(nv);
        bin_count = 0;
    }
    else {
        print_miss(nv);
        bin_count = 0;
    }
}