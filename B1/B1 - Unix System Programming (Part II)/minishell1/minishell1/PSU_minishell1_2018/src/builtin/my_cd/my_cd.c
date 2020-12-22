/*
** EPITECH PROJECT, 2019
** MINISHELL1
** File description:
** my_cd
*/

#include "minishell.h"

int my_cd(t_info *program)
{
    if (verif_cd(program) == -1)
        return -1;
    char *actual_pwd = malloc(sizeof(char) * (PATH_MAX + 1));
    if (actual_pwd == NULL) {
        my_printe("malloc() failed, please_retry\n");
        return -1;
    }
    if (getcwd(actual_pwd, PATH_MAX) == NULL) {
        my_printe("getcwd() failed, please_retry\n");
        return -1;
    }
    if (exec_cd(program) == -1) {
        free(actual_pwd);
        return -1;
    }
    if (update_envcd(program, actual_pwd) == -1) {
        free(actual_pwd);
        return -1;
    }
    return 0;
}
