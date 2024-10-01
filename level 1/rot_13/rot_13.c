/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:30:31 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/10/01 17:39:54 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while(argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'M'|| argv[1][i] >= 'a' && argv[1][i] <= 'm')
				argv[1][i] += 13;
			else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z'|| argv[1][i] >= 'n' && argv[1][i] <= 'z')
				argv[1][i] -= 13;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}