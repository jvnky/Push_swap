/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:44:34 by ychair            #+#    #+#             */
/*   Updated: 2022/03/19 06:26:22 by ychair           ###   ########.fr       */
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


t_a     *checkcommand(t_a *stack, int ac, char **av)
{
    int i;
    int nbr;
    int j;
    char **tab;
    
    t_a *tmp;
    

    i = 1;
  
    if (ac == 2)
    {
        tab = ft_split(av[1], ' ');
        stack = split_check(ac,tab,stack,tmp);
   
    }
    else
        {
        while (i < ac)
        {
            nbr = ft_atoi(av[i]);
            // printf("S= %s\n",av[i]);
            if(is_char_digit(av[i])== 0 || av[i][0] == '\0')
                  error();
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
        }
    return (stack); 
}

