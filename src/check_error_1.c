/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** check_error_2
*/

#include "../include/my.h"

int char_is_nbr_or_space(char nb)
{
    if ((nb >= '0' && nb <= '9') || nb == ' ')
        return (0);
    return (84);
}

int three(char *str)
{
    int	i = 0, space = 0;

    if (str[i] < '0' || str[i] > '9')
        return (84);
    while ((char_isnbr(str[i]) == 0 || str[i] == ' ') && space < 3) {
        if (str[i] == ' ' && char_isnbr(str[i + 1]) == 84)
            return (84);
        if (str[i] == ' ' && char_isnbr(str[i + 1]) == 0) {
            space++;
            i++;
        }
        i++;
    }
    if (space < 2) return (84);
    while (str[i] && str[i] != '#') {
        if (str[i] != ' ')
            return (84);
        i++;
    }
    return (0);
}

int start_end(char **tab)
{
    int i = 0;
    int jul = 0;
    int niska = 0;

    while (tab[i]) {
        if (my_strcmp(tab[i], "##start") == 0)
            jul++;
        if (my_strcmp(tab[i], "##end") == 0)
            niska++;
        i++;
    }
    if (jul > 0 && niska > 0 && jul == niska)
        return (0);
    write(2, "##start // ##end\n", 18);
    return (84);
}

int check_again(char **tab)
{
    int ant = 0, tunnel = 0, room = 0;

    for (int i = 0; tab[i]; i++) {
        if (nb_ants(tab[i]) == 0)
            ant++;
        if (tiret(tab[i]) == 0)
            tunnel++;
        if (three(tab[i]) == 0)
            room++;
    }
    if (ant != 1 || tunnel == 0 || room == 0) {
        write(2, "check_again\n", 13);
        return (84);
    }
    return (0);
}

int check_error_1(char **tab)
{
    if (!tab[4])
        return (84);
    for (int i = 0; tab[i]; i++) {
        if (my_strlen(tab[i]) == 0 && i != _line(tab) - 1)
            return (84);
        if (start_end(tab) == 84)
            return (84);
    }
    if (check_again(tab) == 84)
        return (84);
    return (0);
}