/*
** EPITECH PROJECT, 2019
** my_strcpy_from_to
** File description:
** A function that copies a to b caracters of a string
*/

#include "../../include/my.h"

char *my_strcpy_from_to(char const *src, char *dest, int from, int to)
{
    int i = from;
    int j = 0;

    while (i != to) {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (dest);
}