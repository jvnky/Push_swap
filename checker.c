/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:44:34 by ychair            #+#    #+#             */
/*   Updated: 2022/03/17 12:19:15 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	is_char_digit(char *str)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(str))
	{   
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int valduplicate(t_a *stack, int nbr)
{
    while(stack)
    {
        if(stack->val == nbr)
            return (1);
        stack = stack->next;
    }
return (0);
}


void    checkcommand(t_a *stack, int ac, char **av)
{
    int i;
    int nbr;
    

    i = 1;
    while (i < ac)
    {
        nbr = ft_atoi(av[i]);
        
        
        if(is_char_digit(av[i])== 0)
             error();
        else if (valduplicate(stack,nbr) == 1)
            error();
        ft_lst_addback(&stack,ft_lst_new(nbr));
        i++;
        stack->size_a++;
         
          //printf("===> %d\n",stack->val);
    }
       printf("Stack %d\n",stack->size_a); 
}
