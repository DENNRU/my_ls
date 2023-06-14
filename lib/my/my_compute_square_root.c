/*
** EPITECH PROJECT, 2022
** my_compute_square_root.c
** File description:
** my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    int i = 1;
    int j = 0;
    while (i <= nb){
        nb -= i;
        i += 2;
        j++;
    }
    if (nb != 0){
        return (0);
    }else{
        return (j);
    }
}
