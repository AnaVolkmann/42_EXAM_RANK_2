/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:38:10 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/07/03 12:08:25 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = 0;
	while (i < n && s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char **result;
	int wc = 0;

	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	result = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			result[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(result[k], &str[j], (i - j));
			k++;
		}
	}
	result[k] = NULL;
	return (result);
}
/* #include <stdio.h>
int main(void)
{
    char str[] = "ana laura    gatinha";
    int i = 0;
    char **result = ft_split(str);

    if (!result)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    while (result[i])
    {
        printf("%s\n", result[i]);
        i++;
    }

    i = 0;
    while (result[i])
    {
        free(result[i]);
        i++;
    }
    free(result);

    return 0;
} */