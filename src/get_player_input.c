/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** get_player_input
*/

#include "navy.h"

int check_player_input(navy *nv, char *buffer)
{
    int len = my_strlen(buffer);

    if (len != 3)
        return (84);
    if (buffer[0] < 'A' || buffer[0] > 'H')
        return (84);
    if (buffer[1] < '1' || buffer[1] > '8')
        return (84);
}

void get_player_input(navy *nv)
{
    size_t size = 4;
    char *buffer = malloc(sizeof(char) * 4);
    int ret_vl;

    my_putstr("attack: ");
    ret_vl = getline(&buffer, &size, stdin);
    if (check_player_input(nv, buffer) == 84 || ret_vl == -1) {
            my_putstr("wrong position\n");
            free(buffer);
            get_player_input(nv);
    } else {
        nv->input_buffer = buffer;
    }
}