/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** check_error_2
*/

#include "../include/my.h"

int hash_tag(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] == '#')
            return (0);
        i++;
    }
    return (84);
}

char **delete_coms(char **tab, char **hash_tab)
{
    int i = 0, j = 0;

    while (hash_tab[i]) {
        while (hash_tab[i][j] == '#' &&
        my_strcmp(hash_tab[i], "##start") == 84
        && my_strcmp(hash_tab[i], "##end") == 84) {
            if (!hash_tab[i + 1])
                return (tab);
            j = 0;
            i++;
        }
        tab[i][j] = hash_tab[i][j];
        j++;
        if (!hash_tab[i][j]) {
            j = 0;
            i++;
        }
    }
    return (tab);
}

char **delete_spaces(char **new_tab, char **tab)
{
    int i = 0;
    int j = 0;
    int k = 1;

    while (tab[i]) {
        new_tab[i][j] = tab[i][j];
        j++;
        while (tab[i][my_strlen(tab[i]) - k] == ' ')
            k++;
        if (!tab[i][j] || j - 1 == my_strlen(tab[i]) - k) {
            j = 0;
            k = 1;
            i++;
        }
    }
    return (new_tab);
}

char **skip_hashtag(char **hash_tab)
{
    char **new_tab = NULL;
    char **tab = hash_tab;

    tab = my_malloc(tab);
    delete_coms(tab, hash_tab);
    new_tab = tab;
    new_tab = my_malloc(new_tab);
    new_tab = delete_spaces(new_tab, tab);
    return (new_tab);
}