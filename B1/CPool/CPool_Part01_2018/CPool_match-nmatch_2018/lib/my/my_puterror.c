/*
** EPITECH PROJECT, 2018
** my_puterror.c
** File description:
** Little error outpout display
*/

int my_strlen(char *str);

void my_puterror(char *str)
{
    write(2, str, my_strlen(str));
}
