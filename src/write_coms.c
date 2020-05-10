/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** write_coms
*/

#include "../include/my.h"

void write_coms(char **tab, int i, init_t *elem)
{
    if (str_isnbr(tab[i]) == 0 && my_strlen(tab[i]) != 0) {
        my_putstr("#number_of_ants\n");
        return;
    }
    if (i == 1)
        my_putstr("#rooms\n");
    if (elem->two == 0 && tiret(tab[i]) == 0) {
        my_putstr("#tunnels\n");
        elem->two++;
    }
}