/*
** EPITECH PROJECT, 2018
** my_find_prime_sup.c
** File description:
** Task07 of Pool Day05
*/

#include <my.h>

int my_find_prime_sup(int nb)
{
    while (my_is_prime(nb) != 1) {
        nb++;
    }
    return nb;
}
