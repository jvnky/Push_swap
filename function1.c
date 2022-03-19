/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:24:08 by ychair            #+#    #+#             */
/*   Updated: 2022/03/19 06:26:21 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

t_a  *split_check(int ac,char **tab,t_a *stack,t_a *tmp)
{
    int i;
    int nbr;

    i = 0;
    if (tab[0] == NULL)
        error();
    while (tab[i])
        { 
            if (is_char_digit(tab[i])== 0)
                   error();
            nbr = ft_atoi(tab[i]);
         if (valduplicate(stack,nbr) == 1)
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
    return (stack);
}