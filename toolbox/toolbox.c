/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** toolbox
*/

#include "../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i]) my_putchar(str[i++]);
}

int my_strlen(char const *str)
{
    int i = 0;

    if (str == NULL) return (0);
    for (i = 0; str[i]; i++);
    return (i);
}

char *my_strcat(char *debut, char *fin)
{
    int a = 0;
    int b = 0;
    int size_d = my_strlen(debut);
    int size_fin = my_strlen(fin);
    char *total = malloc(sizeof(char) * (size_d + size_fin + 1));

    while (debut[b]) {
        while (fin[a]) {
            total[a] = fin[a];
            a++;
        }
        while (debut[b]) {
            total[a] = debut[b];
            a++;
            b++;
        }
        total[a] = '\0';
    }
    return (total);
}

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    if (my_strlen(s1) != my_strlen(s2)) return (84);
    while (s1[i] && s2[i]) {
        if (s1[i] == s2[i])
            i++;
        else
            return (84);
    } return (0);
}