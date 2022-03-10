/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:22:53 by ychair            #+#    #+#             */
/*   Updated: 2022/03/10 13:57:32 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int main(int argc, char **argv)
{
    int i=-1;
    t_love *tmp;

    t_love *ptr = NULL;
    
    while(i++ <5)
    {
        lst_addback(&ptr,lst_new(i));
    }
    tmp = ptr;
    while(tmp)
    {
        printf("value %d\n",tmp->val);
        tmp = tmp->next;
    }
    lst_free(ptr);
    // if (argc < 2)
    //     write(1,"Error\n",6);
    // else if (argc == 2)
    //     {
    //         checkav(argv[1]);
    //     }
    // else
    //     {

    //     }
    return (0);
}


