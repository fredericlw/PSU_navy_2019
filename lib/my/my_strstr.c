/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** A function that finds the first occurence of a string in a string
*/

#include <stddef.h>
#include "../../include/my.h"

char *my_strstr(char *str, char const *to_find)
{
    int ii = 0;
    int j = 0;

    if (to_find == NULL) {
        return (str);
    }
    for (int i = 0; str[i] != '\0'; i++) {
        j = i;
        ii = 0;
        while (str[j] == to_find[ii] && to_find[ii] != '\0') {
            j++;
            ii++;
        }
        if (to_find[ii] != '\0') {
            return (&str[i]);
        }
    }
}