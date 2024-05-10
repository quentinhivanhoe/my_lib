/*
** EPITECH PROJECT, 2024
** test power func
** File description:
** my_power_func_tests
*/

#include "../test.h"

Test(power_func, power_func_basic_test)
{
    int test = power_func(5, 3);

    cr_assert_eq(test, 125);
}

Test(power_func, power_func_zero_test)
{
    int test = power_func(5, 0);

    cr_assert_eq(test, 1);
}