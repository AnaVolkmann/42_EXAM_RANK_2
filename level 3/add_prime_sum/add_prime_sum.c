/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 13:06:37 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/06/30 15:36:13 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_is_prime(int num)
{
    int i = 2;

    if (num <= 1)
        return (0);
    while (i * i <= num)
    {
        if (num % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int ft_atoi(char *s)
{
    int res = 0;

    while (*s)
    {
        res = res * 10 + *s++ - 48;
    }
    return (res);
}

void ft_putnbr(int num)
{
    if (num >= 10)
        ft_putnbr(num / 10);
    char digit = num % 10 + 48;
    write (1, &digit, 1);
}
int	main(int argc, char **argv)
{
    if (argc == 2)
    {
        int nbr = ft_atoi(argv[1]);
        int sum = 0;

        while (nbr > 0)
        {
            if (ft_is_prime(nbr))
                sum += nbr;
            nbr--;
        }
        ft_putnbr(sum);
    }
    if (argc != 2)
        ft_putnbr(0);
    write(1, "\n", 1);
    return (0);
}
