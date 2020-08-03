/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** A function that displays the number given as a parameter
*/

#include "../../include/my.h"

int my_put_nbr(int nb)
{
    if (nb <= -10) {
        my_putchar('-');
        my_put_nbr((nb / 10) * -1);
        my_putchar(((nb % 10) * -1) + '0');
    } else if (nb < 0) {
        my_putchar('-');
        my_putchar(((nb % 10) * -1) + '0');
    } else {
        if (nb >= 10)
            my_put_nbr(nb / 10);
        my_putchar((nb % 10) + '0');
    }
    return 0;
}