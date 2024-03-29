/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** Unit Tests Criterion for the my_put_nbr_hexa_capitalize.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <my_printf.h>

Test(my_put_nbr_hexa_capitalize, display_correct_0, .init = redirect_all_std)
{
    my_put_nbr_hexa_capitalize(43567877);
    cr_assert_stdout_eq_str("298CB05");
}

Test(my_put_nbr_hexa_capitalize, display_correct_1, .init = redirect_all_std)
{
    my_put_nbr_hexa_capitalize(4);
    cr_assert_stdout_eq_str("4");
}

Test(my_put_nbr_hexa_capitalize, display_correct_2, .init = redirect_all_std)
{
    my_put_nbr_hexa_capitalize(0);
    cr_assert_stdout_eq_str("0");
}

Test(my_put_nbr_hexa_capitalize, display_correct_3, .init = redirect_all_std)
{
    my_put_nbr_hexa_capitalize(43);
    cr_assert_stdout_eq_str("2B");
}

Test(my_put_nbr_hexa_capitalize, display_correct_4, .init = redirect_all_std)
{
    my_put_nbr_hexa_capitalize(15);
    cr_assert_stdout_eq_str("F");
}