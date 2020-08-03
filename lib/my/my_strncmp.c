/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** The my_strncmp function
*/

#include "../../include/my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    if (n <= 0)
        return (0);
    while (n != 0) {
        if (s1[n] > s2[n])
            return (1);
        if (s1[n] == s2[n])
            return (0);
        if (s1[n] < s2[n])
            return (-1);
        n--;
    }
}