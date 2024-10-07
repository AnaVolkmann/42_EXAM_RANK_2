/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:41:07 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/10/07 12:17:26 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

t_list *sort_list(t_list* lst, int (*cmp)(int, int)) {
    int swap;
    t_list *start;

    start = lst;

    while (lst != NULL && lst->next != NULL)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0)
	    {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = start;
        }
	    else
		    lst = lst->next;
    }
    return (start);
}