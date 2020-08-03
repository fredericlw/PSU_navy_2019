/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** A function that concatenates two strings
*/

#include "../../include/my.h"
#include <stdlib.h>

char *my_strcat(char *dest, char const *src)
{
    int     i = 0;
    int     j = 0;
    char    *result;

    result = malloc(sizeof(char) * (my_strlen(src) + my_strlen(dest) + 1));
    while (dest[i] != '\0') {
        result[i] = dest[i];
        i++;
    }
    while (src[j] != '\0') {
        result[i + j] = src[j];
        j++;
    }
    result[i + j] = '\0';
    return (result);
}