/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:41:01 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/06/25 12:54:58 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	i;
		int	j;

		i = 0;
		j = 0;
		while (argv[1][i])
		{
			if (argv[1][i] == 32 && argv[1][i +1] >= 33 && argv[1][i + 1] <= 126)
				j = i + 1;
			i++;
		}
		while (argv[1][j] >= 33 && argv[1][i] <= 126)
		{
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
