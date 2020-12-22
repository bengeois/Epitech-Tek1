/*
** EPITECH PROJECT, 2018
** Sokoban
** File description:
** create_str.c
*/

#include <sokoban.h>

int fs_open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1) {
        my_puterror("File not found\n");
        exit(84);
    }
    return fd;
}

char *create_str(char **argv)
{
    int fd;
    char buffer[BUFF_SIZE + 1] = {0};
    int size = 1;
    char *str = "";

    fd = fs_open_file(argv[1]);

    while (size > 0) {
    size = read(fd, buffer, BUFF_SIZE);
        if (size == -1) {
            my_puterror("Read failed, ");
            my_puterror(argv[1]);
            my_puterror(" is a file ?\n");
            exit(84);
        }
        buffer[size] = '\0';
    str = mem_alloc(str, buffer);
    }
    close(fd);
    return str;
}