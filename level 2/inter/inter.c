/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:07:16 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/10/01 19:21:18 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	has_char(char *str, int c)
{
	while(*str)
	{
		if(*str == c)
			return (1);
		str++;
	}
	return (0);
}
void inter(char *str1, char *str2)
{
	int i = 0;
	char printed[128] = {0};
	while(*str1)
	{
		if(has_char(str2, *str1) && !has_char(printed, *str1))
		{
			write(1, str1, 1);
			printed[i] = *str1;
			i++;
		}
		str1++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
}