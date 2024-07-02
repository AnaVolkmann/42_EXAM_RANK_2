/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mut.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:15:42 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/07/02 15:32:01 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
    int res = 0;

    while (*str && *str >= 48 && *str <= 57)
        res = (res * 10) + (*str++ - 48);
    return (res);
}

void ft_putnbr(int num)
{
    if (num >= 10)
        ft_putnbr(num / 10);
    char digit = num % 10 + 48;
    write (1, &digit, 1);
}
int main(int argc, char **argv)
{
    int i;
    int nbr;

    if (argc != 2)
        write (1, "\n", 1);
    else
    {
        i = 1;
        nbr = ft_atoi(argv[1]);
        while(i <= 9)
        {
            ft_putnbr(i);
            write (1, " x ", 3);
            ft_putnbr(nbr);
            write (1, " = ", 3);
            ft_putnbr(i * nbr);
            write (1, "\n", 1);
            i++;
        }
    }
    return (0);
}