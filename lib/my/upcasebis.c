/*
** EPITECH PROJECT, 2022
** upcasebis.c
** File description:
** upcasebis
*/

#include <stdio.h>

char upcasebis(char str)
{
    int i;
    if (str >= 97 && str <= 122){
        str -= 32;
    }
    return (str);
}
