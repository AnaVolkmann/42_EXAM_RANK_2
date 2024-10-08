/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strbprk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:36:59 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/10/01 18:43:36 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	if (!s1 || !s2)
		return (0);
	while(s1[i])
	{
		int j = 0;
		while(s2[j])
		{
			if (s1[i] == s2[j])
				return (char *)s1;
			j++;
		}
		i++;
	}
	return (0);
}