/*
** EPITECH PROJECT, 2019
** my_isneg
** File description:
** A function that displays either N if an integer passed as a parameter is
** negative or P if it is positive or null
*/

#include "../../include/my.h"

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return 0;
}