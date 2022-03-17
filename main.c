/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:22:53 by ychair            #+#    #+#             */
/*   Updated: 2022/03/17 12:18:03 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void init_stack(t_a *stack)
{
    stack->val = 0;
    stack->size_a = 0;
    stack->next= NULL;

}

int main(int argc, char **argv)
{
    t_a *head;

   // init_stack(head);

    if (argc < 2 || argv[1] == NULL)
    {
        write(2,"Error\n",6);
        return (0);
    }
    checkcommand(head,argc,argv);
    
    
    //   t_a *tmp1;
    //   tmp1=head;
      //printf("value %d \n",head->val);
   

    // while(head)
    // {
    //    printf("value %d \n",tmp1->val);
    //    tmp1 = tmp1->next; 
        
    //  }



   ft_lst_free(head);
    return (0);
}


