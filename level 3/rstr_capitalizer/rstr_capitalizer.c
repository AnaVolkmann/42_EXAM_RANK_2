/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:43:28 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/07/02 14:02:53 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rstr_capitalizer(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
            str[i] -= 32;
        write (1, &str[i++], 1);
    }
}
int main(int argc, char **argv)
{
    int i;

    if (argc > 1)
    {
        i = 1;
        while (i < argc)
        {
            rstr_capitalizer(argv[i]);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}