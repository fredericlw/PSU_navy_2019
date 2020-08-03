/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** client_login
*/

#include "navy.h"
extern int bin_count;

void connect_to_host(navy *nv, char **av)
{
    struct sigaction log_sig;

    log_sig.sa_sigaction = &login_handler;
    log_sig.sa_flags = SA_SIGINFO;
    kill(my_atoi(av[1]), SIGUSR1);
    sigaction(10, &log_sig, NULL);
    pause();
    nv->host = bin_count;
    bin_count = 0;
    my_putstr("successfully connected\n");
    nv->login = 1;
}