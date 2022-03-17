/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:24:08 by ychair            #+#    #+#             */
/*   Updated: 2022/03/17 13:55:53 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void split_check(int ac,char **tab,t_a *stack,t_a *tmp)
{
    int i;
    //int j;
    int nbr;

    i = 0;
   // j = 0;
    
    while (tab[i])
        {
            nbr = ft_atoi(tab[i]);
            printf("==> %d \n",nbr);
            if (is_char_digit(tab[i])== 0)
                    error();
            else if (valduplicate(stack,nbr) == 1)
                error(); 
            if (!stack)
            {
                stack = ft_lst_new(nbr);
                tmp = stack;
            }
            else
            {
                tmp->next = ft_lst_new(nbr);
                tmp = tmp->next;
            }
            i++;
            stack->size_a++;
        }

}