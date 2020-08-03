/*
** EPITECH PROJECT, 2020
** navy
** File description:
** main
*/

#include "navy.h"
int bin_count = 0;

int check_pid(char *pid)
{
    int i = 0;

    for (i = 0; pid[i] != '\0'; i++) {
        if (pid[i] < '0' || pid[i] > '9')
            return (84);
    }
}

int main(int ac, char **av)
{
    if (ac == 2) {
        if (check_file(av[1]) == 84)
            return (84);
        host(ac, av);
    }
    else if (ac == 3) {
        if (check_file(av[2]) == 84 || check_pid(av[1]) == 84)
            return (84);
        client(ac, av);
    } else {
        return (84);
    }
    return (bin_count);
}