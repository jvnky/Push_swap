/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:57:45 by ychair            #+#    #+#             */
/*   Updated: 2022/03/19 07:23:05 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int ft_strlen(const char *str)
{
    int i;
    int sp;

    sp = 0;
    i = 0;
    while(str[i])
    {
        str[i] == ' ' ? sp++ : 1;    
        i++;
    }
    return (i-sp);
}

void	error(void)
{
	write (2, "Error\n", 6);
	exit(1);
}
