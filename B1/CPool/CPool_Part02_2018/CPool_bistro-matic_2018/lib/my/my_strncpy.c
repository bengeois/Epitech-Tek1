/*
** EPITECH PROJECT, 2018
** my_strncpy.c
** File description:
** Task02 of Pool Day06
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    if (n > i)
        dest[i] = '\0';
    return (dest);
}
