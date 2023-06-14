/*
** EPITECH PROJECT, 2022
** my_strncpy.c
** File description:
** my_strncpy
*/

int my_strlen(char const *str);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;
    for (i = 0; i < n; i++){
        if (i <= my_strlen(src)){
            dest[i] = src[i];
        }else{
            dest[i] = '\0';
        }
    }
    return (dest);
}
