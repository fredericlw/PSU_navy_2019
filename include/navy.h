/*
** EPITECH PROJECT, 2019
** navy.h
** File description:
** A header file that contains the prototypes of all the functions
*/

#ifndef NAVY
#define NAVY

#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
#include <unistd.h>

typedef struct navy{
    int x;
    int y;
    int login;
    pid_t host;
    pid_t client;
    char *input_buffer;
    char **player_board;
    char **enemy_board;
}navy;

char *generate_line(int line_number);
char *generate_first_line(void);
char **generate_empty_board(void);
char **generate_boat(char *boat, char **board);
char **generate_player_board_from_file(char *filepath);
void print_board(char **board);
void print_all_boards(char **player_board, char **enemy_board);
void check_host_attack(navy *nv);
int client(int ac, char **av);
void connect_to_host(navy *nv, char **av);
void send_y_to_host(navy *nv, int k);
void send_x_to_host(navy *nv, int j);
void send_position_to_host(navy *nv);
int get_nb_lines(char const *buffer);
int check_boat_sizes(char **boat);
int check_boat_real_size(char **boat);
int generate_check_boat(char *boat, char **board);
int generate_check_board(char **boat);
int is_col_ok(char pos);
int is_line_ok(char pos);
int check_boat_line(char **boat);
int check_boat_columns(char **boat);
int check_duplicate_position(char **boat);
int get_buff_size(char const *filepath);
int check_filepath(char const *filepath);
int check_boats(char const *filepath, char *buffer);
int check_file(char const *filepath);
void print_hit(navy *nv);
void print_miss(navy *nv);
void get_client_attack_response(navy *nv);
void get_x(navy *nv);
void get_y(navy *nv);
void get_input_from_enemy(navy *nv);
void check_client_attack(navy *nv);
int host(int ac, char **av);
void login_handler(int signo, siginfo_t *info, void *incontext);
void connect_to_client(navy *nv);
void send_y(navy *nv, int k);
void send_x(navy *nv, int j);
void send_position_to_client(navy *nv);
char **boats_to_boat_array(char const *buffer);
void do_nothing(int signo, siginfo_t *info, void *incontext);
void counter_add(int signo, siginfo_t *info, void *incontext);
void display_my_pid(pid_t my_pid);
void get_attack_from_enemy(navy *nv);
int check_player_input(navy *nv, char *buffer);
void get_player_input(navy *nv);
int check_win(navy *nv);
void client_print_all_boards(char **player_board, char **enemy_board);
void print_hited(navy *nv, int char_value);
void print_missed(navy *nv, int char_value);

#endif /* NAVY */