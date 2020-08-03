/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** A function that swaps the content of two integers, whose addresses are given
** as a parameter
*/

#include "../../include/my.h"

void my_swap(int *a, int *b)
{
    int x;
    int y;

    x = *a;
    y = *b;
    *a = y;
    *b = x;
}