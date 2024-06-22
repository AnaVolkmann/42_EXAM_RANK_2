/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 15:32:23 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/06/22 15:38:36 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str)
{
	int	i;
	int	len;
	char	temp;
		
	len = 0;
	i = 0;
	while (str[len])
		len++;
	while (i < len -1)
	{
		temp = str[i];
		str[i] = str[len - 1];
		str [len -1] = temp;
		i++;
		len--;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char s[] = "abc";
	printf("%s", ft_strrev(s));
}
