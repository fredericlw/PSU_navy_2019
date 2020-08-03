/*
** EPITECH PROJECT, 2019
** my_find_prime_sup
** File description:
** A function that returns the smallest prime number that is greater than, or
** equal to the number given as a parameter
*/

#include "../../include/my.h"

int my_find_prime_sup(int nb)
{
    if (nb == 2)
        return (2);
    if ((nb < 0) || (nb % 2 == 0) && (nb != 2) || (nb == 1))
        return (my_find_prime_sup(nb + 1));
    for (int i = 3; i*i <= nb; i = i + 2) {
        if ((nb % i) == 0) {
            return (my_find_prime_sup(nb + 1));
        }
    }
    return (nb);
}