/*
** EPITECH PROJECT, 2024
** my malloc
** File description:
** malloc and stor the pointer into a garabage free
*/
#include <stdlib.h>
#include "../../include/memlib.h"
#include <stdio.h>

// void *my_realloc(void *ptr, size_t size)

void my_memcpy(void *dest, void *src, int nb)
{
    char *cdest = (char *)dest;
    char *csrc = (char *)src;

    for (int i = 0; i < nb; i++)
        cdest[i] = csrc[i];
    cdest[nb] = 0;
}

void *my_malloc(unsigned int size)
{
    void *data = NULL;

    if (size <= 0)
        return data;
    data = malloc(size);
    if (data == NULL)
        return data;
    garbage_handler(data, STORE);
    return data;
}
