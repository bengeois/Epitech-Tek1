/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** create_tab_command
*/

#include "minishell2.h"

t_list *create_tab_command(t_list *list)
{
    t_command *tmp = list->start;
    while (tmp) {
        tmp->tab_command = my_str_to_word_array(tmp->command, ' ');
        if (tmp->tab_command == NULL)
            return (NULL);
        tmp = tmp->next;
    }
    return (list);
}
