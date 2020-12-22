/*
** EPITECH PROJECT, 2018
** my_strcpy.c
** File description:
** Task01 of PoolDay05
*/

#include <my.h>

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    while (src[i] != '\0') {
            dest[i] = src[i];
            i++;
    }
    dest[i] = '\0';
    return dest;
}
