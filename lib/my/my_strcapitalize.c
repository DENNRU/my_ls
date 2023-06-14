/*
** EPITECH PROJECT, 2022
** my_strcapitalize.c
** File description:
** my_strcapitalize
*/

#include <stdio.h>

char *my_strcapitalize(char *str)
{
    int j;
    char t = ' ';
    int p = str[0];
    for (j = 0; str[j] != '\0'; j++){
        if ((t != ' ' && t != '-' && t != '+' && t != '_')
            && (p >= 65 && p <= 90)) {
            str[j] += 32;
        }
        if ((t == ' ' || t == '-' || t == '+' || t == '_')
            && (p >= 97 && p <= 122)) {
            str[j] -= 32;
        }
        t = str[j];
        p = str[j + 1];
    }
    return (str);
}
