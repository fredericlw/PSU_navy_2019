/*
** EPITECH PROJECT, 2019
** my_putchar
** File description:
** A function that displays a character
*/

#include <unistd.h>
#include "../../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}