/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** check_file
*/

#include "navy.h"

int get_buff_size(char const *filepath)
{
    int buff_size = 0;
    int fd;
    char buffer[1];
    int read_return;

    fd = open(filepath, O_RDONLY);
    read_return = read(fd, buffer, 1);
    while (read_return != 0){
        buff_size++;
        read_return = read(fd, buffer, 1);
    }
    close (fd);
    return (buff_size);
}

int check_filepath(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1){
        return (84);
    }
    else {
        close(fd);
        return (0);
    }
}

int check_boats(char const *filepath, char *buffer)
{
    int i = 0;
    char **boat = boats_to_boat_array(buffer);

    if (check_boat_sizes(boat) == 84)
        return (84);
    if (check_boat_columns(boat) == 84)
        return (84);
    if (check_boat_line(boat) == 84)
        return (84);
    if (check_duplicate_position(boat) == 84)
        return (84);
    if (check_boat_real_size(boat) == 84)
        return (84);
    if (generate_check_board(boat) == 84)
        return (84);
}

int check_file(char const *filepath)
{
    int fd;
    int buff_size;
    char *buffer;

    if (check_filepath(filepath) == 84)
        return (84);
    buff_size = get_buff_size(filepath);
    buffer = malloc(sizeof(char) * buff_size + 1);
    fd = open(filepath, O_RDONLY);
    read(fd, buffer, buff_size);
    buffer[buff_size + 1] = '\0';
    if (check_boats(filepath, buffer) == 84)
        return (84);
    free(buffer);
    close(fd);
}