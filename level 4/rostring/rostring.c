/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:20:15 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/07/03 12:39:19 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void write_word(char *start, char *end)
{
    while (start < end)
        write (1, start++, 1);
}

int main(int argc, char *argv[])
{
    char *word_start;
    char *word_end;
    char *str;

    if (argc > 1)
    {
        str = argv[1]; 
        while(*str == ' ' || *str == '\t')
            str++;
        word_start = str;
        while (*str && *str != ' ' && *str != '\t')
            str++;
        word_end = str;
        while (*str == ' ' || *str == '\t')
            str++;
        if (*str)
        {
            while (*str)
            {
                if (*str == ' ' || *str == '\t')
                {
                    while (*str == ' ' || *str == '\t')
                        str++;
                    if (*str)
                        write(1, " ", 1);
                }
                else
                    write (1, str++, 1);
            }
           write (1, " ", 1);
        }
        write_word (word_start, word_end);
    }
    write(1, "\n", 1);
    return 0;
}