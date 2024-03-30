/*
** EPITECH PROJECT, 2024
** my malloc
** File description:
** malloc and stor the pointer into a garabage free
*/
#include <stdlib.h>
#include "memlib.h"

void *my_malloc(int size)
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
