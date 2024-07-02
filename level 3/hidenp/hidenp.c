/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:24:35 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/07/02 12:33:46 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_hiden(char *s1, char *s2)
{
    while (*s2)
    {
        if (*s1 == *s2)
            s1++;
        s2++;
    }
    return (*s1 == '\0');
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        if (is_hiden(argv[1], argv[2]))
            write (1, "1", 1);
        else
            write (1, "0", 1);
    }
    write (1, "\n", 1);
    return (0);
}