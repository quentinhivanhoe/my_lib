/*
** EPITECH PROJECT, 2024
** test personnal my_strdup
** File description:
** testing my strdup
*/

#include "../test.h"

Test(my_strdup, my_strdup_null)
{
    cr_assert_null(my_strdup(NULL));
}

Test(my_strdup, my_strdup_basic)
{
    char *test = my_strdup("Bonjour");

    cr_assert_str_eq(test, "Bonjour");
}

Test(my_strdup, my_strdup_empty)
{
    char *test = my_strdup("");

    cr_assert_str_eq(test, "");
}