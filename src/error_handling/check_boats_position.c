/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** check_boats_position
*/

#include "navy.h"

int is_col_ok(char pos)
{
    if (pos < 'A' || pos > 'H')
        return (-1);
    else {
        return (1);
    }
}

int is_line_ok(char pos)
{
    if (pos < '1' || pos > '8')
        return (-1);
    else {
        return (1);
    }
}

int check_boat_line(char **boat)
{
    int a = is_line_ok(boat[0][3]);
    int b = is_line_ok(boat[1][3]);
    int c = is_line_ok(boat[2][3]);
    int d = is_line_ok(boat[3][3]);
    int e = is_line_ok(boat[0][6]);
    int f = is_line_ok(boat[1][6]);
    int g = is_line_ok(boat[2][6]);
    int h = is_line_ok(boat[3][6]);

    if (a == -1 || b == -1 || c == -1 || d == -1 || e == -1 || f == -1
    || g == -1 || h == -1)
        return (84);
}

int check_boat_columns(char **boat)
{
    int a = is_col_ok(boat[0][2]);
    int b = is_col_ok(boat[1][2]);
    int c = is_col_ok(boat[2][2]);
    int d = is_col_ok(boat[3][2]);
    int e = is_col_ok(boat[0][5]);
    int f = is_col_ok(boat[1][5]);
    int g = is_col_ok(boat[2][5]);
    int h = is_col_ok(boat[3][5]);

    if (a == -1 || b == -1 || c == -1 || d == -1 || e == -1 || f == -1
    || g == -1 || h == -1)
        return (84);
}

int check_duplicate_position(char **boat)
{
    int i = 0;

    for (i = 0; i != 4; i++) {
        if (boat[i][2] == boat[i][5] && boat[i][3] == boat[i][6])
            return (84);
    }
}