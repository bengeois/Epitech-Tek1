/*
** EPITECH PROJECT, 2018
** my_strstr.c
** File description:
** Task04 of Pool Day06
*/

#include <my.h>

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;

    if (str[0] != '\0') {
        while (to_find[i] != '\0') {
            if (to_find[i] != str[i]) {
                return (my_strstr(str + 1, to_find));
            }
            i++;
        }
        return str;
    } else {
        return 0;
    }
}
