/*
** EPITECH PROJECT, 2022
** my_str_isalpha.c
** File description:
** my_str_isalpha
*/

int my_str_isalpha(char const *str)
{
    int i;
    if (str == ""){
        return 1;
    }
    for (i = 0; i != '\0'; i++){
        if ((str[i] < 41 || str[i] > 90) && (str[i] < 97 || str[i] > 122)){
            return (0);
        }
    }
    return (1);
}
