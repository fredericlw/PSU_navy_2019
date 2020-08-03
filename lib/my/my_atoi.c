/*
** EPITECH PROJECT, 2019
** my_atoi.c
** File description:
** my_atoi
*/

#include "../../include/my.h"

int my_atoi(char *str)
{
    int num;

    num = 0;
    while (*str >= '0' && *str <= '9')
    {
        num = num * 10 + (*str - '0');
        str += 1;
    }
    return (num);
}