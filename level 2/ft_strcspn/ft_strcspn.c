/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:40:12 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/06/20 17:07:17 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return(i);
			j++;
		}
		i++;
	}
	return (i);
}
/*#include <stdio.h>
#include <string.h>

int main () {
   int len;
   const char str1[] = "ioana";
   const char str2[] = "ana";

   len = ft_strcspn(str1, str2);

   printf("First matched character is at %d\n", len + 1);

   return(0);
}*/
