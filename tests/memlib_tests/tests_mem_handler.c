/*
** EPITECH PROJECT, 2024
** test mem handler
** File description:
** testing mem handler
*/

#include "../test.h"

Test(mem_handler, test_store_via_my_malloc)
{
    char *str = my_malloc(str);

    mem_handler(NULL, DUMP);
}

Test(mem_handler, test_store_null)
{
    char *str = NULL;

    mem_handler(str, STORE);
    mem_handler(NULL, DUMP);
}

Test(mem_handler, test_is_stroed)
{
    char *str = my_strdup("test");

    cr_assert_eq(mem_handler(str, IS_STORED), 1);
    mem_handler(NULL, DUMP);
}

Test(mem_handler, test_is_not_stored)
{
    char *str = "bonjour";

    cr_assert_eq(mem_handler(str, IS_STORED), 0);
    mem_handler(NULL, DUMP);
}

Test(mem_handler, test_print_mem)
{
    char *test1 = my_strdup("bonjour");
    char *test4 = my_strdup("bonjour");
    char *test3 = my_strdup("bonjour");
    char *test2 = my_strdup("bonjour");

    mem_handler(NULL, PRINT);
    mem_handler(NULL, DUMP);
}