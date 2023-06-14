/*
** EPITECH PROJECT, 2022
** my_is_prime.c
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    int j = nb - 2;
    if (nb <= 1){
        return 0;
    }
    while (j > 1){
        if (nb % j == 0){
            return (0);
        }
        j -= 1;
    }
    return (1);
}
