/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** printtab
*/

#include "../include/my.h"

int printtab(char **tab, init_t *elem)
{
    for (int y = 0; tab[y]; y++) {
        write_coms(tab, y, elem);
        if (my_strlen(tab[y]) == 0)
            return (0);
        my_putstr(tab[y]);
        my_putchar('\n');
    }
    return (0);
}