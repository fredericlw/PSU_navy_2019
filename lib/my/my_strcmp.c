/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** The my_strcmp function
*/

#include "../../include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    for (int i = 0; s1[i] && s2[i] != '\0'; i++) {
        if (s1[i] > s2[i])
            return (1);
        if ((s1[i] == s2[i]) && (s1[i] || s2[i] != '\0'))
            return (0);
        if (s1[i] < s2[i])
            return (-1);
        }
}