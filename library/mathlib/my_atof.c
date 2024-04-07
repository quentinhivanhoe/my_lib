/*
** EPITECH PROJECT, 2024
** personnal atof
** File description:
** ascii to float
*/

#include "mathlib.h"
#include "../strlib/strlib.h"
#include <stddef.h>
#include <stdio.h>

float my_atof(char *str)
{
    char *reel_nb = NULL;
    char *dec_nb = NULL;
    int reel = 0;
    float dec = 0;
    float nbr = 0;

    if (!str)
        return (float)-__INT_MAX__;
    if (my_strocc(str, '.') < 1)
        return (float)my_atoi(str);
    reel_nb = my_strduptil(str, '.');
    dec_nb = my_strdup(str + my_strlen(reel_nb) + 1);
    reel = my_atoi(reel_nb);
    dec = my_atoi(dec_nb);
    nbr = (reel + (dec / power_func(10, my_strlen(dec_nb))));
    return nbr;
}
