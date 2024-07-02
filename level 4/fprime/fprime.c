/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:03:16 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/07/02 18:22:43 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    int nbr;

    if (argc == 2)
    {
        i = 1;
        nbr = atoi(argv[1]);
        if (nbr == 1)
            printf("1");
        while (nbr >= ++i)
        {
            if (nbr % i == 0)
            {
                printf("%d", i);
                if (i == nbr)
                    break;
                printf("*");
                nbr /= i;
                i = 1;
            }
        }
    }
    printf("\n");
    return (0);
}