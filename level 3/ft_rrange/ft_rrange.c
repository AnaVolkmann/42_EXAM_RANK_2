/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:07:52 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/07/02 12:23:00 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int i = 0;
    int len = abs(end - start) + 1;
    int *res = (int *)malloc(sizeof(int) * len);

    if (res == NULL) 
        return NULL;
    while(i < len)
    {
        if (start < end)
            res[i] = end--;
        else
            res[i] = end++;
        i++;
    }
    return (res);
}