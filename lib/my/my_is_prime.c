/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
** A function that returns 1 if the number is prime and 0 if not
*/

#include "../../include/my.h"

int my_is_prime(int nb)
{
    if (nb == 2)
        return (1);
    if ((nb < 0) || (nb % 2 == 0) && (nb != 2) || (nb == 1))
        return (0);
    for (int i = 3; i*i <= nb; i = i + 2) {
        if ((nb % i) == 0) {
            return (0);
        }
    }
    return (1);
}