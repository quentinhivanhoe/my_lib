/*
** EPITECH PROJECT, 2024
** test my nbrlen
** File description:
** my_nbrlen_tests
*/

#include "../test.h"

Test(my_nbrlen, my_nbrlen_basic_test)
{
    int test = my_nbrlen(10);

    cr_assert_eq(test, 2);
}

Test(my_nbrlen, my_nbrlen_negative_number_test)
{
    int test = my_nbrlen(-10);

    cr_assert_eq(test, 2);
}

Test(my_nbrlen, my_nbrlen_digit_test)
{
    int test = my_nbrlen(5);

    cr_assert_eq(test, 1);
}