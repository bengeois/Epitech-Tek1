/*
** EPITECH PROJECT, 2018
** my_strcat.c
** File description:
** Task 02 of Pool DayO7
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int dest_len = my_strlen(dest);
    int i = 0;

    for (i = 0; src[i] != '\0'; i++)
    {
    	dest[dest_len + i] = src[i];
    }
    dest[dest_len + i] = '\0';
    return dest;
}