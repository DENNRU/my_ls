/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** my_put_nbr
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    if (0 > nb){
        nb = nb * -1;
        my_putchar(45);
    }
    if (nb < 10){
        my_putchar(nb + 48);
        return (0);
    }else{
        my_put_nbr((nb / 10));
    }
    my_putchar((nb % 10) + 48);
    return (0);
}
