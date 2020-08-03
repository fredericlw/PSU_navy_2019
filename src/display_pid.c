/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** display_pid
*/

#include "navy.h"

void display_my_pid(pid_t my_pid)
{
    my_putstr("my_pid: ");
    my_put_nbr(my_pid);
    my_putchar('\n');
}