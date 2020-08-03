/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** get_input
*/

#include "navy.h"
extern int bin_count;

void get_x(navy *nv)
{
    struct sigaction first_sig;
    struct sigaction second_sig;
    int i = 1;

    first_sig.sa_sigaction = &counter_add;
    first_sig.sa_flags = SA_SIGINFO;
    second_sig.sa_sigaction = &do_nothing;
    second_sig.sa_flags = SA_SIGINFO;
    for (i = 0; i < 8; i++) {
        sigaction(12, &second_sig, NULL);
        sigaction(10, &first_sig, NULL);
        pause();
    }
    nv->x = bin_count;
    bin_count = 0;
}

void get_y(navy *nv)
{
    struct sigaction first_sig;
    struct sigaction second_sig;
    int i = 0;


    first_sig.sa_sigaction = &counter_add;
    first_sig.sa_flags = SA_SIGINFO;
    second_sig.sa_sigaction = &do_nothing;
    second_sig.sa_flags = SA_SIGINFO;
    for (i = 0; i < 8; i++) {
        sigaction(12, &second_sig, NULL);
        sigaction(10, &first_sig, NULL);
        pause();
    }
    nv->y = bin_count;
    bin_count = 0;
}

void get_input_from_enemy(navy *nv)
{
    my_putstr("waiting for enemy's attack...\n");
    get_x(nv);
    get_y(nv);
}