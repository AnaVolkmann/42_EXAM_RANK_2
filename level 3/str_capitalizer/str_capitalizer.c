/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:05:27 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/07/02 15:08:29 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void str_capitalizer(char *str)
{
    int i = 0;

    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] -= 32;
    write (1, &str[i], 1);    
    while (str[++i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || str[i - 1] == '\t'))
            str[i] -= 32;
        write (1, &str[i], 1);
    }
}

int main(int argc, char **argv)
{
    int i = 0;

    if (argc > 1)
    {
        i = 1;
        while (i < argc)
        {
            str_capitalizer(argv[i]);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}