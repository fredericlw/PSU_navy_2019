/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** boats_to_boat_array
*/

#include "navy.h"

char **boats_to_boat_array(char const *buffer)
{
    int pos = 0;
    int old_pos = 0;
    int i = 0;
    int arg = 0;
    int len = my_strlen(buffer);
    char **arr;
    int words = nb_words(buffer);

    arr = malloc(sizeof(char *) * 32);
    for (i = 0; i != len + 1; i++) {
        if (buffer[i] == '\n' || buffer[i] == '\0') {
            old_pos = pos;
            pos = i;
            arr[arg] = malloc(sizeof(char) * (pos - old_pos));
            arr[arg] = my_strcpy_from_to(buffer, arr[arg], old_pos, pos);
            pos++;
            arg++;
        }
    }
    return (arr);
}