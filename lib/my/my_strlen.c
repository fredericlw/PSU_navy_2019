/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** A function that counts and returns the number of characters found in the
** string passed as parameter
*/

#include "../../include/my.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (*str != '\0') {
        *str++;
        i++;
    }
    return (i);
}