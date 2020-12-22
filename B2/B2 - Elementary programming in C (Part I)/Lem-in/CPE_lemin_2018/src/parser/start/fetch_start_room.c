/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** fetch_start_room
*/

#include <lemin.h>

char **fetch_start_room(void)
{
    char *info = NULL;
    char **info_tab = NULL;

    if ((info = get_next_line(0)) == NULL)
        return (NULL);
    my_printf("%s\n", START);
    if ((info_tab = check_valid_room(info)) == NULL) {
        free(info);
        return (NULL);
    }
    free(info);
    return (info_tab);
}
