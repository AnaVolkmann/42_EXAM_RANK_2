/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:57:41 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/07/02 13:06:46 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int n1 = atoi(argv[1]);
        int n2 = atoi(argv[2]);

        if (n1 > 0 && n2 > 0)
        {
            while (n1 != n2)
            {
                if (n1 > n2)
                    n1 -= n2;
                else 
                    n2 -= n1;
            }
            printf("%d", n1);
        }
    }
    printf("\n");
    return (0);
}