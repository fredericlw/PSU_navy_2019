/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** login
*/

#include "navy.h"
extern int bin_count;

void login_handler(int signo, siginfo_t *info, void *incontext)
{
    bin_count = info->si_pid;
}

void connect_to_client(navy *nv)
{
    struct sigaction log_sig;

    log_sig.sa_sigaction = &login_handler;
    log_sig.sa_flags = SA_SIGINFO;
    sigaction(10, &log_sig, NULL);
    pause();
    nv->client = bin_count;
    bin_count = 0;
    kill(nv->client, SIGUSR1);
    my_putstr("\nenemy connected\n");
    nv->login = 1;
}