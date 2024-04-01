/*
** EPITECH PROJECT, 2024
** personal realloc
** File description:
** re allocated a block of memory and extended it to a new size
*/
#include "memlib.h"
#include <stdio.h>

void *my_realloc(void *ptr, int size)
{
    char **new_ptr = NULL;
    int len = 0;

    if (!ptr)
        return my_malloc(size);
    len = my_memlen(ptr);
    printf("[%d]\n", len);
    if (size <= len)
        return ptr;
    new_ptr = my_malloc(size);
    my_memcpy(new_ptr, ptr);
    return new_ptr;
}
