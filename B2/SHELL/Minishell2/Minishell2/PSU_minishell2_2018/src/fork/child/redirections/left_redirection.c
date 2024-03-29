/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** left_redirection
*/

#include "minishell2.h"

int left_redirection(t_info *shell, t_command *command)
{
    int fd = 0;
    if ((fd = open(command->next->tab_command[0], O_RDONLY)) == -1) {
        my_printe("%s\n", strerror(errno));
        return (EXIT_FAILURE);
    }
    if (dup2(fd, 0) == -1) {
        my_printe("%s\n", strerror(errno));
        return (EXIT_FAILURE);
    }
    if (command->next->next != NULL) {
        if (dup2(shell->fd[1], 1) == -1) {
            my_printe("%s\n", strerror(errno));
            return (EXIT_FAILURE);
        }
    }
    close(fd);
    close(shell->fd[1]);
    close(shell->fd[0]);
    return (EXIT_SUCCESS);
}
