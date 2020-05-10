/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** check_error
*/

#include "../include/my.h"

int check_nb_ants(char **tab)
{
    int i = 0;
    int k = 0;

    while (tab[i]) {
        if (str_isnbr(tab[i]) == 0 && my_strlen(tab[i]) != 0)
            k++;
        i++;
    }
    if (k == 1)
        return (0);
    write(2, "int check_nb_ants(char **tab)\n", 31);
    return (84);
}

int check_position(char **tab)
{
    int i = 0;

    while (tab[i]) {
        while (tiret(tab[i]) == 0 || tab[i][0] == '#'
        || str_isnbr(tab[i]) == 0) {
            if (!tab[i + 1])
                return (0);
            i++;
        }
        if (rooms(tab[i]) == 84)
            return (84);
        i++;
    }
    return (0);
}

int check_tiret(char **tab)
{
    int i = 0;
    int pass = 0;

    while (tab[i]) {
        pass = 0;
        if (tiret(tab[i]) == 0)
            pass = 1;
        if (pass == 1 && check_tiret2(tab[i]) == 84)
            return (84);
        i++;
    }
    return (0);
}

int check_error_2(char **tab)
{
    if (check_nb_ants(tab) == 84)
        return (84);
    if (check_position(tab) == 84)
        return (84);
    if (check_tiret(tab) == 84)
        return (84);
    return (0);
}