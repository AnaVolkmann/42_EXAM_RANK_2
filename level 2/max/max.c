/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:10:28 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/06/25 13:12:56 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	int	result;
	int	i;

	i = 0;
	if (len == 0)
		return (0);
	result = tab[i];
	while (i < len)
	{
		if (result < tab[i])
			result = tab[i];
		i++;
	}
	return (result);
}
