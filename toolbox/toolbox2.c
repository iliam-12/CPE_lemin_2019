/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** toolbox2
*/

#include "../include/my.h"

char *my_strdup(char *src)
{
    char *str = malloc(sizeof(char) * (my_strlen(src) + 1));
    int i = 0;

    while (src[i]) {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

int _line(char **tab)
{
    int i = 0;

    while (tab[i])
        i++;
    return (i);
}

int _len(char **tab)
{
    int i = 0, j = 0;

    while (tab[i][j])
        j++;
    return (j);
}

char **my_malloc(char **tab)
{
    int line = _line(tab);
    int len = _len(tab);

    if ((tab = malloc(sizeof(char *) * (line + 1))) == NULL)
        return (NULL);
    for (int y = 0; y != line; y++) {
        if ((tab[y] = malloc(sizeof(char) * (len + 1))) == NULL)
            return (NULL);
    }
    return (tab);
}

int nb_ants(char *str)
{
    int	i = 0;

    if (str[i] < '0' || str[i] > '9')
        return (84);
    while (str[i] >= '0' && str[i] <= '9')
        i++;
    while (str[i] && str[i] != '#') {
        if (str[i] != ' ')
            return (84);
        i++;
    }
    return (0);
}