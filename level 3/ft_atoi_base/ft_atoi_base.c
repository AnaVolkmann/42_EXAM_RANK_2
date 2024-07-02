/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:35:08 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/07/02 17:21:29 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int find_index(char c, int base)
{
    char low[] = "0123456789abcdef";
    char up[] = "0123456789ABCDEF";
    int i = 0;

    while (i < base)
    {
        if (c == low[i] || c == up[i])
            return (i);
        i++;
    }
    return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int neg = 1;
    int res = 0;

    while ((str[i] == 32 || str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-')
        neg = -1;
    while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 65 && str[i] <= 90))
    {
        res = (res * str_base) + find_index(str[i], str_base);
        i++;
    }
    return (res * neg);
}
/* #include <stdio.h>

int	main()
{
	const char *s = "26";
	int size = 16;

	printf("%i", ft_atoi_base(s, size));
} */