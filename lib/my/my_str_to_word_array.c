/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** str to word array
*/

#include <stdlib.h>
#include "../../include/my.h"

int nb_words(char const *buffer)
{
    int words = 0;
    int i = 0;

    for (i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == ' ')
            words++;
    }
    words++;
    return (words);
}

char **my_str_to_word_array(char const *buffer)
{
    int pos = 0;
    int old_pos = 0;
    int i = 0;
    int arg = 0;
    int len = my_strlen(buffer);
    char **arr;
    int words = nb_words(buffer);

    arr = malloc(sizeof(char *) * words);
    for (i = 0; i != len + 1; i++) {
        if (buffer[i] == ' ' || buffer[i] == '\0') {
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