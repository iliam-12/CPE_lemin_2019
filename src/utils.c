/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** utils
*/

#include "../include/my.h"

int char_isnbr(char nb)
{
    if (nb >= '0' && nb <= '9')
        return (0);
    return (84);
}

int check_tiret2(char *str)
{
    int i = 0;
    int tiret = 0;
    int nb = 0;
    int total = 0;

    while (str[i]) {
        if (char_isnbr(str[i]) == 0)
            nb++;
        if (str[i] == '-')
            tiret++;
        i++;
        total = nb + tiret;
        if (total == my_strlen(str))
            return (0);
    }
    return (84);
}

int tiret(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] == '-')
            return (0);
        i++;
    }
    return (84);
}

int str_isnbr(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9')
            i++;
        else
            return (84);
    }
    return (0);
}

int rooms(char *str)
{
    int i = 0;
    int jul = 0;

    while (str[i]) {
        if (char_is_nbr_or_space(str[i]) == 84)
            return (84);
        if (str[i] == ' ')
            jul++;
        if (str[i] == ' ' && str[i + 1] == ' ')
            return (84);
        i++;
    }
    if (jul == 2)
        return (0);
    write(2, "int rooms(char *str) // [utils.c]\n", 35);
    return (84);
}