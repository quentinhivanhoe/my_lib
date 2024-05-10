/*
** EPITECH PROJECT, 2024
** test personnal word to str to word array
** File description:
** tests_my_str_to_word_array
*/

#include "../test.h"

Test(my_str_to_word_array, test_basic)
{
    char **arr = my_str_to_word_array("bonjour les amis", ' ');
    char *test[] = {
        "bonjour",
        "les",
        "amis",
        NULL,
    };

    for (unsigned int i = 0; arr[i]; i++)
        cr_assert_str_eq(arr[i], test[i]);
}

Test(my_str_to_word_array, test_many_sep)
{
    char **arr = my_str_to_word_array("      bonjour  les         amis", ' ');
    char *test[] = {
        "bonjour",
        "les",
        "amis",
        NULL,
    };

    for (unsigned int i = 0; arr[i]; i++)
        cr_assert_str_eq(arr[i], test[i]);
}

Test(my_str_to_word_array, test_null)
{
    char **arr = my_str_to_word_array(NULL, ' ');

    cr_assert_null(arr);
}