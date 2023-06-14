/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** my_strcat
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char *src)
{
    int i;
    int j = 0;
    i = my_strlen(dest);
    while (src[j] != '\0') {
        dest[i] = src[j];
        i = i + 1;
        j = j + 1;
    }
    dest[i] = '\0';
    return (dest);
}
