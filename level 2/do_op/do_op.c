/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:10:54 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/10/01 18:19:23 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '-')
			printf("%d", atoi(argv[1]) - (atoi(argv[3])));
		if (argv[2][0] == '+')
			printf("%d", atoi(argv[1]) + (atoi(argv[3])));
		if (argv[2][0] == '*')
			printf("%d", atoi(argv[1]) * (atoi(argv[3])));
		if (argv[2][0] == '/')
			printf("%d", atoi(argv[1]) / (atoi(argv[3])));
		if (argv[2][0] == '%')
			printf("%d", atoi(argv[1]) % (atoi(argv[3])));
	}
	printf("\n");
	return (0);
}