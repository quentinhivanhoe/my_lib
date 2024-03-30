/*
** EPITECH PROJECT, 2024
** personnal strcpy
** File description:
** copy a string
*/
#include "../../include/strlib.h"

void my_strcpy(char *dest, char *src)
{
    int i = 0;

    if (!src)
        return;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}
