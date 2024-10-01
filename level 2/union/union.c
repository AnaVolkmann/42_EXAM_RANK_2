/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 20:06:45 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/10/01 20:14:15 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int has_char(char *str, char c)
{
	while(*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		int j = 0;
		char printed[128] = {0};

		while(argv[1][i])
		{
			if(!has_char(printed, argv[1][i]))
			{
				printed[j] = argv[1][i];
				write(1, &argv[1][i], 1);
				j++;
			}
			i++;
		}
		i = 0;
		while(argv[2][i])
		{
			if (!has_char(printed, argv[2][i]))
			{
				printed[j] = argv[2][i];
				write(1, &argv[2][i], 1);
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}