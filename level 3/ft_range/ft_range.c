/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:38:39 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/07/02 12:00:48 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int i = 0;
	int len = abs((end - start) + 1);
	int *res = (int *)malloc(sizeof(int) * len);

	while (i < len)
	{
		if (start < end)
			res[i] = start++;
		else if (end < start)
			res[i] = start--;
		i++;
	}
	return (res);
}