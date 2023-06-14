/*
** EPITECH PROJECT, 2022
** my_find_prime_sup.c
** File description:
** my_find_prime_sup
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int i = 0;
    int j = nb - 1;
    while (i == 0){
        j++;
        i = my_is_prime(j);
    }
    return (j);
}
