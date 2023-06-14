/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
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

int get_ls(int ac, char** av, char* const d)
{
    DIR* dirp;
    struct dirent* direntp;
    dirp = opendir(d);
    if (dirp == NULL)
        return (0);
    for (;;) {
        direntp = readdir(dirp);
        if (direntp == NULL) break;
        if (direntp->d_name[0] == '.') {
            int i = 0;
        } else {
            my_putstr(direntp->d_name);
            my_putchar('\n');
        }
    }
    closedir(dirp);
    return (0);
}

int get_lsdir(int ac, char** av, flags_t f)
{
    int i = 0;
    for (int indice = 1; indice <= ac - 1; indice++) {
        if (av[indice][0] == '-') {
            i++;
            get_flags(ac, av, indice, f);
        }
    }
    if (i == 0) {
        make_ls(ac, av);
    }
    return (0);
}

int get_flags(int ac, char** av, int indice, flags_t f)
{
    int indic = 1;
    while (av[indice][indic] != '\0') {
        if (av[indice][indic] == 'a')
            f.a = 1;
        if (av[indice][indic] == 'l')
            f.l = 1;
        if (av[indice][indic] == 'R')
            f.R = 1;
        if (av[indice][indic] == 'd')
            f.d = 1;
        if (av[indice][indic] == 'r')
            f.r = 1;
        if (av[indice][indic] == 't')
            f.t = 1;
        indic++;
    }
    test_flags(ac, av, f);
    return (0);
}

int make_ls(int ac, char** av)
{
    int indice = 1;
    int val = 0;
    while (av[indice] != NULL) {
        if (av[indice][0] != '-') {
            val += 1;
            get_ls(ac, av, av[indice]);
        }
        indice++;
    }
    if (val == 0)
        get_ls(ac, av, ".");
    return (0);
}

int main(int ac, char** av)
{
    flags_t f;
    f.a = 0;
    f.l = 0;
    f.R = 0;
    f.d = 0;
    f.r = 0;
    f.t = 0;
    char* const d = ".";
    if (ac == 1) {
        get_ls(ac, av, d);
        return (0);
    } else if (ac >= 2) {
        get_lsdir(ac, av, f);
        return (0);
    }
    return (0);
}
