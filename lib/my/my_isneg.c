/*
** EPITECH PROJECT, 2022
** my_isneg.c
** File description:
** my_isneg
*/

#include <unistd.h>

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0){
        my_putchar(80);
    }else{
        my_putchar(78);
    }
    return 0;
}
