/*
** EPITECH PROJECT, 2022
** my_str_isprintable.c
** File description:
** my_str_isprintable
*/

int my_str_isprintable(char const *str)
{
    int i;
    if (str == ""){
        return (1);
    }
    for (i = 0; i != '\0'; i++){
        if (str[i] > 31){
            return (0);
        }
    }
    return (1);
}
