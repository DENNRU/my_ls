/*
** EPITECH PROJECT, 2022
** flags.c
** File description:
** flags
*/

#include "include/my.h"
#include "include/flags.h"
#include <stdio.h>
#include <dirent.h>
#include <stddef.h>

int get_ls(int ac, char** av, char* const d);
int get_lsdir(int ac, char** av, flags_t f);
int get_flags(int ac, char** av, int indice, flags_t f);
int make_ls(int ac, char** av);
int app_flags1(int ac, char** av, flags_t f);
int test_flags(int ac, char** av, flags_t f);
int flags_d(int ac, char** av);
int flags_a1(int ac, char** av);
int flags_a2(int ac, char** av, char* const d);
void ls_t(char *path);

int app_flags1(int ac, char** av, flags_t f)
{
    if (f.d == 1) {
        flags_d(ac, av);
        return (0);
    }
    if (f.a == 1)
        flags_a1(ac, av);
    if (f.t == 1) {
        ls_t(".");
    } else {
        make_ls(ac, av);
    }
    return (0);
}

int test_flags(int ac, char** av, flags_t f)
{
    int solution = f.a + f.l + f.R + f.d + f.r + f.t;
    if (solution == 0) {
        make_ls(ac, av);
    } else {
        app_flags1(ac, av, f);
    }
    return (0);
}

int flags_d(int ac, char** av)
{
    int indice = 1;
    int val = 0;
    while (av[indice] != NULL) {
        if (av[indice][0] != '-') {
            my_putstr(av[indice]);
            my_putchar('\n');
            val++;
        }
        indice++;
    }
    if (val == 0) {
        my_putstr(".\n");
    }
    return (0);
}

int flags_a1(int ac, char** av)
{
    int indice = 1;
    int val = 0;
    while (av[indice] != NULL) {
        if (av[indice][0] != '-') {
            val += 1;
            flags_a2(ac, av, av[indice]);
        }
        indice++;
    }
    if (val == 0)
        flags_a2(ac, av, ".");
    return (0);
}

int flags_a2(int ac, char** av, char* const d)
{
    DIR* dirp;
    struct dirent* direntp;
    dirp = opendir(d);
    if (dirp == NULL)
        return (0);
    for (;;) {
        direntp = readdir(dirp);
        if (direntp == NULL) break;
        my_putstr(direntp->d_name);
        my_putchar('\n');
    }
    closedir(dirp);
    return (0);
}
