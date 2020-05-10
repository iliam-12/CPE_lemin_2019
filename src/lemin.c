/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** lemin
*/

#include "../include/my.h"

int lemin(void)
{
    init_t *elem = malloc(sizeof(init_t));
    char *buff = malloc(sizeof(char) * 99999);
    char **hash_tab = NULL;
    char **tab = NULL;

    elem->one = 0, elem->two = 0;
    read(0, buff, 9999);
    hash_tab = my_str_to_word_array(buff);
    if (check_error_1(hash_tab) == 84)
        return (84);
    hash_tab = swapy(hash_tab);
    tab = skip_hashtag(hash_tab);
    if (check_error_2(tab) == 84)
        return (84);
    if (printtab(tab, elem) == 84)
        return (84);
    return (0);
}