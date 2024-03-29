/*
** EPITECH PROJECT, 2018
** test_my_strcpy
** File description:
** Test of Task 13 of Pool Day06
*/

#include <criterion/criterion.h>

int my_str_isupper(char const *str);

Test(my_str_isupper, test_00)
{
    cr_expect_eq(my_str_isupper("AZERTYUIOP\n"), 0);
}

Test(my_str_isupper, test_01)
{
    cr_expect_eq(my_str_isupper("azertyuio"), 0);
}

Test(my_str_isupper, test_02)
{
    cr_expect_eq(my_str_isupper("AZERTYUIOP"), 1);
}

Test(my_str_isupper, test_03)
{
    cr_expect_eq(my_str_isupper("RTYUiCTG"), 0);
}

Test(my_str_isupper, test_04)
{
    cr_expect_eq(my_str_isupper("1234"), 0);
}
