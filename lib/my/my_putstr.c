/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** A function that displays, one-by-one, the characters of a string.
*/

#include "../../include/my.h"

char my_putstr(char const *str)
{
    while (*str != '\0') {
        my_putchar (*str);
        *str++;
    }
}