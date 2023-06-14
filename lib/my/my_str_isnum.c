/*
** EPITECH PROJECT, 2022
** my_str_isnum.c
** File description:
** my_str_isnum
*/

int my_str_isnum(char const *str)
{
    int i;
    if (str == ""){
        return (1);
    }
    for (i = 0; i != '\0'; i++){
        if (str[i] < 48 || str[i] > 57){
            return (0);
        }
    }
    return (1);
}
