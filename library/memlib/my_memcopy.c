/*
** EPITECH PROJECT, 2024
** personnal memcopy
** File description:
** copy a block of memory into a another
*/
#include <stddef.h>

void my_memcpy(void *dest, void *src)
{
    char **cdest = (char **)dest;
    char **csrc = (char **)src;

    for (int i = 0; csrc[i] != NULL; i++)
        cdest[i] = csrc[i];
}
