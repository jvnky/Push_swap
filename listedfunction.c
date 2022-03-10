/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listedfunction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:59:41 by ychair            #+#    #+#             */
/*   Updated: 2022/03/10 13:51:53 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

//creation maillon
t_love *lst_new(int val)
{
    t_love *tmp;
    
    
    tmp = malloc(sizeof(t_love));
    tmp->next = NULL;
    tmp->val = val;

    return(tmp);
}

//ajout fin maillon.
void lst_addback(t_love **begin,t_love *new)
{
    t_love *tmp;

    tmp = *begin;
    if (tmp == NULL)
    {
        *begin = new;
        return;
    }
    while(tmp->next)
    {
        tmp = tmp->next;
    }
    
    tmp->next = new;
    new->next = NULL;
}

void lst_free(t_love *begin)
{   
        t_love *tmp1;

        while (begin && begin->next) 
        {
            tmp1 = begin->next;
            free(begin);
            begin = tmp1;    
        }
        if(begin)
            free(begin);
        
}
