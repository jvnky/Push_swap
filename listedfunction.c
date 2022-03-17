/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listedfunction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:59:41 by ychair            #+#    #+#             */
/*   Updated: 2022/03/17 12:19:16 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

//creation maillon
t_a *ft_lst_new(int val)
{
    t_a *tmp;
    
    
    tmp = malloc(sizeof(t_a));
    tmp->next = NULL;
    tmp->val = val;

    return(tmp);
}

//ajout fin maillon.
void ft_lst_addback(t_a **begin,t_a *new)
{
    t_a *tmp;

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

void ft_lst_free(t_a *begin)
{   
        t_a *tmp1;

        while (begin && begin->next) 
        {
            tmp1 = begin->next;
            free(begin);
            begin = tmp1;    
        }
        if(begin)
            free(begin);
}
