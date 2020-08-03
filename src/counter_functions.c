/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** counter_functions
*/

#include "navy.h"
extern int bin_count;

void do_nothing(int signo, siginfo_t *info, void *incontext)
{
    int i = 0;

    i++;
}

void counter_add(int signo, siginfo_t *info, void *incontext)
{
    bin_count++;
}