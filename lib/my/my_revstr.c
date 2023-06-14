/*
** EPITECH PROJECT, 2022
** my_revstr.c
** File description:
** my_revstr
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    char c;
    int i;
    int j;
    int k;
    j = my_strlen(str) - 1;
    k = j / 2;
    for (i = 0; i <= k; ++i){
        c = str[i];
        str[i] = str[j - i];
        str[j - i] = c;
    }
    return (str);
}
