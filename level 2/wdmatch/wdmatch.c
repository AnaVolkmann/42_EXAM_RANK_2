/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 12:35:04 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/06/30 12:45:29 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void put_str(char *str)
{
    while (*str)
        write(1, str++, 1);
}
int check_str(char *str1, char *str2)
{
    while (*str2)
    {
        if (*str2 == *str1)
            str1++;
        str2++;
    }
    return (*str1 == '\0');
}
int main(int argc, char **argv)
{
    if (argc == 3)
    {
        if (check_str(argv[1], argv[2]))
            put_str(argv[1]);
    }
    write (1, "\n", 1);
    return (0);
}