/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** A function that swaps all the characters in a string
*/

#include "../../include/my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *z = str;
    char a;

    while (str[i] != '\0') {
        i++;
    }
    i--;
    k = i / 2;
    while (i > k) {
        a = str[j];
        z[j] = str[i];
        z[i] = a;
        j++;
        i--;
    }
    return (z);
}