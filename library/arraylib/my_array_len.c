/*
** EPITECH PROJECT, 2024
** my_array_len
** File description:
** count the len of an array
*/

#include "../../include/arraylib.h"
#include <stdio.h>

int my_array_len(void *ptr)
{
    char **cptr = NULL;
    int len = 0;

    if (!ptr)
        return 0;
    cptr = (char **)ptr;
    while (cptr[len] != NULL)
        len++;
    return len;
}
