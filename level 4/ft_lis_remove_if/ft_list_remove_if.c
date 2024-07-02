/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:19:44 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/07/02 19:40:26 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if (!begin_list || !*begin_list)
        return(0);
    t_list *current = *begin_list;
    if (cmp(current->data, data_ref) == 0)
    {
        *begin_list = current->next;
        free(current);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    else
        current = *begin_list;
        ft_list_remove_if(&current->next, data_ref, cmp);
}