/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** my_put_nbr_binary
*/

#include <my_printf.h>

int my_put_nbr_binary(long long nbr)
{
    int digits = 0;
    if (nbr < 2) {
        my_putchar(nbr + 48);
    }
    else if (nbr > 1) {
        my_put_nbr_binary(nbr / 2);
        digits = nbr % 2;
        my_putchar(digits + 48);
    }
    return 0;
}
