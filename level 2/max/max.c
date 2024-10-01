/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:43:24 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/10/01 19:47:18 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int i = 0;
	int result = 0;

	if (len == 0)
		return (0);
	result = tab[i];
	while(i < len)
	{
		if (tab[i] > result)
			result = tab[i];
		i++;
	}
	return (result);
}