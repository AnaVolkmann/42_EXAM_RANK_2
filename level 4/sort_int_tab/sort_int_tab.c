/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 20:24:28 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/07/02 20:29:42 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    int swap;

    while (i < (size - 1))
    {
        if (tab[i] > tab[i + 1])
        {
            swap = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = swap;
            i = 0;
        }
        else 
            i++;
    }
}