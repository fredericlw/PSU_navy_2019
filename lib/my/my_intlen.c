/*
** EPITECH PROJECT, 2019
** my_intlen
** File description:
** A function that return the nb of characters of an int
*/

#include "../../include/my.h"

int my_intlen(int nb)
{
    int len = 1;

    for (len; nb > 9; len++) {
        nb = nb / 10;
    }
    return (len);
}