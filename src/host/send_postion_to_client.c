/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** send_postion_to_client
*/

#include "navy.h"
extern int bin_count;

void send_y(navy *nv, int k)
{
    int y_pos = nv->input_buffer[1] - '1';

    if (k <= y_pos) {
        kill(nv->client, SIGUSR1);
        usleep(10000);
    }
    else {
        kill(nv->client, SIGUSR2);
        usleep(10000);
    }
}

void send_x(navy *nv, int j)
{
    int x_pos = nv->input_buffer[0] - 'A';

    if (j <= x_pos) {
        kill(nv->client, SIGUSR1);
        usleep(10000);
    }
    else {
        kill(nv->client, SIGUSR2);
        usleep(10000);
    }
}

void send_position_to_client(navy *nv)
{
    int i = 0;
    int j = 0;
    int k = 0;

    for (j = 0; j != 8; j++) {
        send_x(nv, j);
    }
    for (k = 0; k != 8; k++) {
        send_y(nv, k);
    }
}