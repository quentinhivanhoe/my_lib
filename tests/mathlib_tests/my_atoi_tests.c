/*
** EPITECH PROJECT, 2024
** test personal atoi
** File description:
** my_atoi_tests
*/

#include "../test.h"

Test(my_atoi, my_atoi_basic_test)
{
    int test = my_atoi("10");

    cr_assert_eq(test, 10);
}

Test(my_atoi, my_atoi_null_test)
{
    int test = my_atoi(NULL);

    cr_assert_eq(test, -__INT_MAX__);
}

Test(my_atoi, my_atoi_negative_number_test)
{
    int test = my_atoi("-10");

    cr_assert_eq(test, -10);
}

Test(my_atoi, my_atoi_zero_test)
{
    int test = my_atoi("0");

    cr_assert_eq(test, 0);
}