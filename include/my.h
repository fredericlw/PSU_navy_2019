/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** A header file that contains the prototypes of all the functions
*/

#ifndef MY_H
#define MY_H

int my_atoi(char *str);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_isneg(int n);
int my_is_prime(int nb);
void my_putchar(char c);
int my_put_nbr(int nb);
char my_putstr(char const *str);
char *my_revstr(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
int my_strtol(char *str, char **endptr);
void my_swap(int *a, int *b);
int get_buff_size(char const *filepath);
int my_intlen(int nb);
char *my_itoa(int nb);
char *my_strcpy_from_to(char const *src, char *dest, int from, int to);
char **my_str_to_word_array(char const *buffer);
int nb_words(char const *buffer);

#endif /* MY_H */