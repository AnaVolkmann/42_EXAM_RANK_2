/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:28:52 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/07/03 17:41:52 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_len(int nbr)
{
    int len;
    long nb;

    nb = (long)nbr;
    len = 1;
    if (nb < 0)
    {
        nb = nb * (-1);
        len++;
    }
    while (nb >= 10)
    {
        nb = nb / 10;
        len++;
    }
    return (len);
}
char *ft_itoa(int nbr)
{
    int len;
    long nb;
    char *result;

    nb = (long)nbr;
    len = ft_len(nbr);
    result = (char *)malloc(sizeof(char) * (len + 1));
    if (!result)
        return (NULL);
    if (nb < 0)
    {
        result[0] = '-';
        nb = nb * (-1);
    }
    if (nb >= 10)
    {
        nb = nb / 10;
        len++;
    }
    while (len-- && result[len] != '-')
    {
        result[len] = nb % 10 + 48;
        nb = nb / 10;
    }
    return (result);
}