/*
** EPITECH PROJECT, 2024
** personal strdup
** File description:
** duplicate a string
*/
#include "../../include/memlib.h"
#include "../../include/strlib.h"

char *my_strdup(char *str)
{
    int len = 0;
    char *dup_str = NULL;

    if (!str)
        return NULL;
    len = my_strlen(str);
    dup_str = my_malloc(sizeof(char *) * (len + 1));
    for (int i = 0; str[i] != '\0'; i++)
        dup_str[i] = str[i];
    dup_str[len] = '\0';
    return dup_str;
}
