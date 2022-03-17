/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:22:53 by ychair            #+#    #+#             */
/*   Updated: 2022/03/17 13:55:54 by ychair           ###   ########.fr       */
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
    t_a *head = NULL;

   // init_stack(head);

    if (argc < 2 || argv[1] == NULL)
        error();
    head = checkcommand(head,argc,argv);
    while(head)
    {
       printf("node => %d \n",head->val);
       head = head->next;
     }
   ft_lst_free(head);
    return (0);
}


