/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:41:07 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/07/02 20:22:46 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort_list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int swap;
    t_list *temp;

    temp = lst;
    while(lst->next)
    {
        if (((*cmp)(lst->data, lst->next->data)) == 0)
        {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = temp;
        }
        else
            lst = lst->next;
    }
    lst = temp;
    return (lst);
}