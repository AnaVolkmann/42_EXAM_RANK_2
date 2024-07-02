/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:16:33 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/06/25 14:29:15 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	has_char(char *str, char now)
{
	int	i = 0;
	
	while (str[i])
	{
		if (str[i] == now)
			return (1);
		i++;
	}
	return (0);
}

void	union_str(char *str1, char *str2)
{
	int	i = 0;
	int	j = 0;
	char printed[256] = {0};
	
	while (str1[i])
	{
		if (!has_char(printed, str1[i]))
		{
			printed[j] = str1[i];
			write (1, &str1[i], 1);
			j++;
		}
		i++;
	}
	i = 0;
	while (str2[i])
	{
		if (!has_char(printed, str2[i]))
		{
			printed[j] = str2[i];
			write (1, &str2[i], 1);
	       		j++;
		}
		i++;
	}
}	

int	main(int argc, char **argv)
{
	if (argc == 3)
		union_str(argv[1], argv[2]);
	write (1, "\n", 1);
}
