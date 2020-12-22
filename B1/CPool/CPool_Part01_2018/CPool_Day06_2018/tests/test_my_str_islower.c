/*
** EPITECH PROJECT, 2018
** test_my_strcpy
** File description:
** Test of Task 12 of Pool Day06
*/

#include <criterion/criterion.h>

int my_str_islower(char const *str);

Test(my_str_islower, test_00)
{
    cr_expect_eq(my_str_islower("AaZzEeRr"), 0);
}

Test(my_str_islower, test_01)
{
    cr_expect_eq(my_str_islower("azertyuio"), 1);
}

Test(my_str_islower, test_02)
{
    cr_expect_eq(my_str_islower("a"), 1);
}

Test(my_str_islower, test_03)
{
    cr_expect_eq(my_str_islower("111"), 0);
}

Test(my_str_islower, test_04)
{
    cr_expect_eq(my_str_islower("azer br1"), 0);
}
