/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** A function that copies n characters from a string
*/

#include "../../include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] != '\0' && i < n) {
        if (n > i)
            dest[n+1] = src[i];
        dest[i] = src[i];
        i++;
    }
    dest[i + 1] = '\n';
    return (dest);
}