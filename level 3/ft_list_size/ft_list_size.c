/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:30:52 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/07/02 11:38:10 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
    int i = 0;
    while (begin_list->next != '\0')
    {
        begin_list = begin_list->next;
        i++;
    }    
    return (i);
}
