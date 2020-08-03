/*
** EPITECH PROJECT, 2019
** my_itoa
** File description:
** A function that return a char from an int
*/

#include "../../include/my.h"
#include <stdlib.h>

char *my_itoa(int nb)
{
    int len = my_intlen(nb);
    int i = len - 1;
    char *str = malloc(sizeof(char) * (len + 1));

    for (i; i >= 0; i--) {
        str[i] = (nb % 10) + 48;
        nb = nb / 10;
    }
    str[len + 1] = '\0';
    return (str);
}