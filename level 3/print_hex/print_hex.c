/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:14:58 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/07/02 13:36:09 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int n = 0;
	while (*str)
	{
		n = (n * 10) + (*str++ - 48);
	}
	return (n);
}

void print_hexa(int n)
{
	char base[] = "0123456789abcdef";

	if (n >= 16)
		print_hexa(n / 16);
	write (1, &base[n % 16], 1);
}
int main(int argc, char **argv)
{
	if (argc == 2)
		print_hexa(ft_atoi(argv[1]));
	write (1, "\n", 1);
	return (0);
}
