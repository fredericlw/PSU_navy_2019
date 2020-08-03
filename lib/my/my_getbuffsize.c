/*
** EPITECH PROJECT, 2019
** my_getbuffsize
** File description:
** An alternative to stat to get the size of a file
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "../../include/my.h"

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