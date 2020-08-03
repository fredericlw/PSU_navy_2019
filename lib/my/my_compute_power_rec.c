/*
** EPITECH PROJECT, 2019
** my_compute_power_rec
** File description:
** A recursive function that returns the first argument raised to the power p,
** where p is the second argument
*/

#include "../../include/my.h"

int my_compute_power_rec(int nb, int p)
{
    int i = nb;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    return (nb * my_compute_power_rec(i, p - 1));
}