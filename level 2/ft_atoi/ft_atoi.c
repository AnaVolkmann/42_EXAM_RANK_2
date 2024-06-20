/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:09:59 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/06/20 16:25:07 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i;
	int neg;
	int number;
	
	i = 0;
	number = 0;
	neg = 1;
	while (str[i] && (str[i] == 32 || str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i]  >= 48 && str[i] <= 57)
	{
		number = number * 10 + (str[i] - 48);
			i++;
	}
	return (number * neg);
}
