/*
** EPITECH PROJECT, 2022
** my_strlowcase.c
** File description:
** my_strlowcase
*/

#include <stdio.h>

char *my_strlowcase(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++){
        if (str[i] >= 65 && str[i] <= 90){
            str[i] += 32;
            }
    }
    return (str);
}
