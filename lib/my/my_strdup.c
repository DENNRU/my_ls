/*
** EPITECH PROJECT, 2022
** my_strdup.c
** File description:
** my_strdup
*/

#include <stdio.h>
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char *src)
{
    char *dest;
    int length;
    length = my_strlen(src);
    dest = malloc(length + 1);
    length = 0;
    while (src[length] != '\0') {
        dest[length] = src[length];
        length = length + 1;
    }
    dest[length] = '\0';
    return (dest);
}
