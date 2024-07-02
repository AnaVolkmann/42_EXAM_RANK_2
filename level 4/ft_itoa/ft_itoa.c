/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:23:39 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/07/02 18:39:25 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	len_n(int n)
{
	long	nb;
	int		len;

	nb = (long)n;
	len = 1;
	if (nb < 0)
	{
		nb = nb * (-1);
		len++;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	nb;
	int		len;

	len = len_n(n);
	nb = (long)n;
	result = (char *)ft_calloc(sizeof(char), len_n(n) + 1);
	if (!result)
		return (NULL);
	result[len + 1] = 0;
	if (nb < 0)
	{
		result[0] = '-';
		nb = nb * (-1);
	}
	while (len-- && result[len] != '-')
	{
		result[len] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (result);
} 
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_itoa(-217));
}