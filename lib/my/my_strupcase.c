/*
** EPITECH PROJECT, 2022
** my_strupcase.c
** File description:
** my_strupcase
*/

#include <stdio.h>

char *my_strupcase(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++){
        if (str[i] >= 97 && str[i] <= 122){
            str[i] -= 32;
            }
    }
    return (str);
}
