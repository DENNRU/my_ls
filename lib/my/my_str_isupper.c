/*
** EPITECH PROJECT, 2022
** my_str_isupper.c
** File description:
** my_str_isupper
*/

#include <stdio.h>

int my_str_isupper(char const *str)
{
    int i;
    if (str == ""){
        return (1);
    }
    for (i = 0; str[i] != '\0'; i++){
        if (str[i] >= 65 && str[i] <= 90){
            return (1);
        }
    }
    return (0);
}
