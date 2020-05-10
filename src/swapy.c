/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** swapy
*/

#include "../include/my.h"

char **swap_rooms_tunnels(char **tab, int i)
{
    char *temp = NULL;

    while (tab[i]) {
        if (tab[i + 1] && tiret(tab[i]) == 0
        && (tiret(tab[i + 1]) == 84 || tab[i + 1][0] == '#')) {
            if (my_strlen(tab[i + 1]) == 0)
                return (tab);
            temp = NULL;
            temp = tab[i + 1];
            tab[i + 1] = tab[i];
            tab[i] = temp;
            i = 0;
        }
        i++;
    }
    return (tab);
}

char **swap_ants(char **tab, int i)
{
    int a = 0, b = 1;
    char *temp = NULL;

    while (nb_ants(tab[i]) == 84)
        i++;
    while (tab[a][0] == '#') {
        temp = tab[a];
        tab[a] = tab[a + b];
        tab[a + b] = temp;
        b++;
    }
    temp = tab[0];
    tab[0] = tab[i];
    tab[i] = temp;
    return (tab);
}

char **swapy(char **tab)
{
    int i = 0;
    tab = swap_ants(tab, i);
    tab = swap_rooms_tunnels(tab, i);
    return (tab);
}