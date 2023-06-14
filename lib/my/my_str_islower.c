/*
** EPITECH PROJECT, 2022
** my_str_islower.c
** File description:
** my_str_islower
*/

#include <stdio.h>

int my_str_islower(char *str)
{
    int i;
    if (str == ""){
        return (1);
    }
    for (i = 0; str[i] != '\0'; i++){
        if (str[i] < 97 || str[i] > 122){
            return (0);
            }
    }
    return (1);
}
