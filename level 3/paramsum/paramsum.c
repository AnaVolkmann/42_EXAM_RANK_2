/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:46:49 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/07/02 12:55:05 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int num)
{
    if (num >= 10)
        ft_putnbr(num / 10);
    char digit = num % 10 + 48;
    write (1, &digit, 1);
}
int main(int argc, char **argv)
{
    (void)argv;
    ft_putnbr(argc - 1);
    write (1, "\n", 1);
    return (0);
}