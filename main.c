/*
** EPITECH PROJECT, 2024
** my_lib
** File description:
** main
*/
#include <stdio.h>
#include <stdlib.h>
#include "include/memlib.h"


int main(void)
{
    char src[] = "geeks";
    char dest[4];

    my_memcpy(dest, src, 3);
    return 0;
}