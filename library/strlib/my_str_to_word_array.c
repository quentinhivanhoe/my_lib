/*
** EPITECH PROJECT, 2024
** string to word array
** File description:
** transform a string into an array of string
*/
#include "strlib.h"
#include "../memlib/memlib.h"
#include <stddef.h>
#include <stdio.h>

int my_count_word(char *str, char delim)
{
    unsigned int cmp = 0;
    char *tmp = NULL;

    tmp = my_strtok(str, delim);
    while (tmp != NULL) {
        cmp++;
        tmp = my_strtok(NULL, delim);
    }
    return cmp;
}

char **my_str_to_word_array(char *str, char delim)
{
    char **array = NULL;
    char *tmp = NULL;
    unsigned int nb_word = 0;

    if (!str)
        return NULL;
    nb_word = my_count_word(str, delim);
    array = my_malloc(sizeof(char *) * (nb_word + 1));
    tmp = my_strtok(str, delim);
    for (unsigned int i = 0; tmp != NULL; i++) {
        array[i] = tmp;
        tmp = my_strtok(NULL, delim);
    }
    array[nb_word] = NULL;
    return array;
}
