/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

/* ___ INCLUDES ___ */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <fcntl.h>


/* ___ STRUCTURES ___ */

struct elem
{
    int count;
    int one;
    int two;
}; typedef struct elem init_t;


/* _____--------- FONCTIONS ---------_____ */

int lemin(void);

            /* _UTILS _*/
int str_isnbr(char *str);
int rooms(char *str);
int check_tiret2(char *str);
int tiret(char *str);
int char_isnbr(char nb);

            /* _OTHER_UTILS_ */
char **skip_hashtag(char **tab);
int hash_tag(char *str);
char **delete_coms(char **tab, char **hash_tab);
char **delete_spaces(char **new_tab, char **tab);

            /* _CHECK_ERROR_1_ */
int check_error_1(char **tab);
int start_end(char **tab);
int char_is_nbr_or_space(char nb); // *check2
int check_again(char **tab);
int three(char *str);

            /* _CHECK_ERROR_2_ */
int check_nb_ants(char **tab);
int check_position(char **tab);
int check_tiret(char **tab);
int check_error_2(char **tab);

            /* _SWAPY_ */
char **swap_rooms_tunnels(char **tab, int i);
char **swap_ants(char **tab, int i);
char **swapy(char **tab);


            /* _TOOLBOX_ */
int printtab(char **tab, init_t *elem);
int nb_line(char const *str);
int nb_char(char const *str, int i);
char **my_str_to_word_array(char const *str);
void my_putchar(char c);
void my_putstr(char const *str);
int my_strcmp(char const *s1, char const *s2);
char *my_strcat(char *debut, char *fin);
char *my_strdup(char *src);
int my_strlen(char const *str);
void write_coms(char **tab, int i, init_t *elem);
int _line(char **tab);
int _len(char **tab);
char **my_malloc(char **tab);
int nb_ants(char *str);


#endif /* !MY_H_ */
